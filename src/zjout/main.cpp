#include <getopt.h>
#include "bluesim_kernel_api.h"
#include "model_mkTb.h"

static char vcdfile_default[] = "mydump.vcd";

extern char *optarg;
extern int optind;
extern int opterr;
extern int optopt;

int parse_cmd_line_args(int argc, char *argv[], char **p_vcdfile);
void fprint_help(FILE *fpo, char *argv0);

static struct option long_options[] = {
	{"help", no_argument, 0, 'h'},
	{"dumpvcd", optional_argument, 0, 'd'},
	{0, 0, 0, 0}};

static char short_options[] = "hHV";

int main(int argc, char *argv[])
{
	int status;
	tStatus s;
	tBool b;
	char *p_vcdfile = NULL;
	
	status = parse_cmd_line_args(argc, argv, &p_vcdfile);
	if (status != 0)
		exit(EXIT_FAILURE);
	tModel model = new_MODEL_mkTb();
	if (model == NULL)
	{
		fprintf(stderr, "ERROR: Cannot create model\n");
		exit(EXIT_FAILURE);
	}
	tSimStateHdl sim = bk_init(model, true);
	if (sim == NULL)
	{
		fprintf(stderr, "ERROR: Cannot initialize model\n");
		exit(EXIT_FAILURE);
	}
	if (p_vcdfile != NULL)
	{
		s = bk_set_VCD_file(sim, p_vcdfile);
		if (s != BK_SUCCESS)
		{
			fprintf(stderr, "ERROR: Cannot set VCD filename\n");
			exit(EXIT_FAILURE);
		}
		b = bk_enable_VCD_dumping(sim);
		if (!b)
		{
			fprintf(stderr, "ERROR: Cannot enable VCD dumping\n");
			exit(EXIT_FAILURE);
		}
	}
	s = bk_advance(sim, false);
	if (s != BK_SUCCESS)
	{
		fprintf(stderr, "ERROR: Failure to advance clocks\n");
		exit(EXIT_FAILURE);
	}
  MODEL_mkTb* p_model = (MODEL_mkTb*)(model);
	p_model->mkTb_instance->generate_testbench(bk_now(sim), "tb$top");
	p_model->mkTb_instance->INST_counter.generate_testbench(bk_now(sim), "tb$top.INST_counter");
	p_model->mkTb_instance->INST_counter.INST_spi_writer.generate_testbench(bk_now(sim), "tb$top.INST_counter.INST_spi_writer");
	bk_shutdown(sim);
	exit(EXIT_SUCCESS);
}

int parse_cmd_line_args(int argc, char *argv[], char **p_vcdfile)
{
	int c;
	while (1)
	{
		int option_index = 0;
		c = getopt_long(argc, argv, short_options, long_options, &option_index);
		if (c == -1)
			break;
		switch (c)
		{
		case 0:
		case '?':
			return -1;
		case 'V':
		case 'd':
		{
			char *p_src = optarg;
			if (optarg == NULL)
				p_src = &(vcdfile_default[0]);
			int len = strlen(p_src);
			char *p = (char *)malloc(len);
			if (p == NULL)
			{
				fprintf(stderr,
						"Internal error: unable to malloc %0d bytes to hold"
						" '--dumpvcd' command-line arg\n",
						len);
				fprintf(stderr, "    --dumpvcd arg is: '%s'\n", p_src);
				return -1;
			}
			strcpy(p, p_src);
			*p_vcdfile = p;
			break;
		}
		case 'h':
		case 'H':
			fprint_help(stdout, argv[0]);
			return -1;

		default:
			fprintf(stderr, "Unrecognized option '%c' (ASCII %0d)\n", c, c);
			return -1;
		}
	}
	if (optind < argc)
	{
		fprintf(stderr, "Unknown extra args on command line\n");
		while (optind < argc)
			printf("%s ", argv[optind++]);
		printf("\n");
		return -1;
	}
	return 0;
}
void fprint_help(FILE *fpo, char *argv0)
{
	fprintf(fpo, "Usage:    %s  <flags>\n", argv0);
	fprintf(fpo, "Flags:\n");
	fprintf(fpo, "    -h, -H, --help          Print this help message\n");
	fprintf(fpo, "    -V, --dumpvcd[=<name>]  Dump waveforms to VCD file (default: dump.vcd)\n");
}
