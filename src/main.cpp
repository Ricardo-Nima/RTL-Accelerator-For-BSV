// ================================================================

#include <getopt.h>

#include "bluesim_kernel_api.h"

#include "model_mkTb.h"

// ================================================================

static char vcdfile_default [] = "dump.vcd";

// ================================================================
// Print help

void fprint_help (FILE *fpo, char *argv0)
{
    fprintf (fpo, "Usage:    %s  <flags>\n", argv0);
    fprintf (fpo, "Flags:\n");
    fprintf (fpo, "    -h, -H, --help          Print this help message\n");
    fprintf (fpo, "    -V, --dumpvcd[=<name>]  Dump waveforms to VCD file (default: dump.vcd)\n");
}

// ================================================================
// parse_cmd_line_args ()
// Return 0 on success, -1 on failure

static struct option long_options[] = {
    // name          has_arg              flag    val
    {"help",         no_argument,         0,      'h' },
    {"dumpvcd",      optional_argument,   0,      'd' },
    {0,              0,                   0,       0  }
};

// Short options.
static char short_options [] = "hHV";

extern char *optarg;    // value of option arg
extern int   optind;    // argv [optind] is next element to be processed (1..)
extern int   opterr;    // 
extern int   optopt;    // Holds unrecognized option

int
parse_cmd_line_args (int argc, char *argv [],
		     /* outputs */
		     char **p_vcdfile)
{
    int c;

    while (1) {
	int option_index = 0;

	c = getopt_long (argc, argv, short_options, long_options, & option_index);

	if (c == -1)
	    break;

	switch (c) {
	case 0:
	    // if (option_index == 1) { } else ...

	case '?':    // Unrecognized option
	    return -1;

	case 'V':
	case 'd':
	  {
	    char *p_src = optarg;
	    if (optarg == NULL)
		p_src = & ( vcdfile_default [0] );
	    int len = strlen (p_src);
	    char *p = (char *) malloc (len);
	    if (p == NULL) {
		fprintf (stderr,
			 "Internal error: unable to malloc %0d bytes to hold"
			 " '--dumpvcd' command-line arg\n",
			len);
		fprintf (stderr, "    --dumpvcd arg is: '%s'\n", p_src);
		return -1;
	    }
	    strcpy (p, p_src);
	    *p_vcdfile = p;
	    break;
	  }

	case 'h':
	case 'H':
	    fprint_help (stdout, argv [0]);
	    return -1;

	default:
	    fprintf (stderr, "Unrecognized option '%c' (ASCII %0d)\n", c, c);
	    return -1;
	}
    }

    if (optind < argc) {
	fprintf (stderr, "Unknown extra args on command line\n");
	while (optind < argc)
	    printf("%s ", argv [optind++]);
	printf("\n");
	return -1;
    }

    return 0;
}

// ================================================================

int main(int argc, char *argv[])
{
  int status;
  tStatus s;
  tBool b;

  char *p_vcdfile = NULL;

  status = parse_cmd_line_args (argc, argv, & p_vcdfile);
  if (status != 0)
      exit (EXIT_FAILURE);

  tModel model = new_MODEL_mkTb();
  if (model == NULL) {
      fprintf (stderr, "ERROR: Cannot create model\n");
      exit (EXIT_FAILURE);
  }
  tSimStateHdl sim = bk_init(model, true);
  if (sim == NULL) {
      fprintf (stderr, "ERROR: Cannot initialize model\n");
      exit (EXIT_FAILURE);
  }

  if (p_vcdfile != NULL) {
      s = bk_set_VCD_file(sim, p_vcdfile);
      if (s != BK_SUCCESS) {
	  fprintf (stderr, "ERROR: Cannot set VCD filename\n");
	  exit (EXIT_FAILURE);
      }
      b = bk_enable_VCD_dumping(sim);
      if (! b) {
	  fprintf (stderr, "ERROR: Cannot enable VCD dumping\n");
	  exit (EXIT_FAILURE);
      }
  }

  s = bk_advance(sim, false);
  if (s != BK_SUCCESS) {
      fprintf (stderr, "ERROR: Failure to advance clocks\n");
      exit (EXIT_FAILURE);
  }

  bk_shutdown(sim);

  exit (EXIT_SUCCESS);
}

// ================================================================
