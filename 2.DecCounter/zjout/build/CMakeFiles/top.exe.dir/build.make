# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/cmake/cmake-3.24.3-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /opt/cmake/cmake-3.24.3-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jason/bsvsrc/src/2.DecCounter/zjout

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jason/bsvsrc/src/2.DecCounter/zjout/build

# Include any dependencies generated for this target.
include CMakeFiles/top.exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/top.exe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/top.exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/top.exe.dir/flags.make

CMakeFiles/top.exe.dir/main.cpp.o: CMakeFiles/top.exe.dir/flags.make
CMakeFiles/top.exe.dir/main.cpp.o: /home/jason/bsvsrc/src/2.DecCounter/zjout/main.cpp
CMakeFiles/top.exe.dir/main.cpp.o: CMakeFiles/top.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/bsvsrc/src/2.DecCounter/zjout/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/top.exe.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/top.exe.dir/main.cpp.o -MF CMakeFiles/top.exe.dir/main.cpp.o.d -o CMakeFiles/top.exe.dir/main.cpp.o -c /home/jason/bsvsrc/src/2.DecCounter/zjout/main.cpp

CMakeFiles/top.exe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/top.exe.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/bsvsrc/src/2.DecCounter/zjout/main.cpp > CMakeFiles/top.exe.dir/main.cpp.i

CMakeFiles/top.exe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/top.exe.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/bsvsrc/src/2.DecCounter/zjout/main.cpp -o CMakeFiles/top.exe.dir/main.cpp.s

CMakeFiles/top.exe.dir/mkDecCounter.cxx.o: CMakeFiles/top.exe.dir/flags.make
CMakeFiles/top.exe.dir/mkDecCounter.cxx.o: /home/jason/bsvsrc/src/2.DecCounter/zjout/mkDecCounter.cxx
CMakeFiles/top.exe.dir/mkDecCounter.cxx.o: CMakeFiles/top.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/bsvsrc/src/2.DecCounter/zjout/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/top.exe.dir/mkDecCounter.cxx.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/top.exe.dir/mkDecCounter.cxx.o -MF CMakeFiles/top.exe.dir/mkDecCounter.cxx.o.d -o CMakeFiles/top.exe.dir/mkDecCounter.cxx.o -c /home/jason/bsvsrc/src/2.DecCounter/zjout/mkDecCounter.cxx

CMakeFiles/top.exe.dir/mkDecCounter.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/top.exe.dir/mkDecCounter.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/bsvsrc/src/2.DecCounter/zjout/mkDecCounter.cxx > CMakeFiles/top.exe.dir/mkDecCounter.cxx.i

CMakeFiles/top.exe.dir/mkDecCounter.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/top.exe.dir/mkDecCounter.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/bsvsrc/src/2.DecCounter/zjout/mkDecCounter.cxx -o CMakeFiles/top.exe.dir/mkDecCounter.cxx.s

CMakeFiles/top.exe.dir/mkSPIWriter.cxx.o: CMakeFiles/top.exe.dir/flags.make
CMakeFiles/top.exe.dir/mkSPIWriter.cxx.o: /home/jason/bsvsrc/src/2.DecCounter/zjout/mkSPIWriter.cxx
CMakeFiles/top.exe.dir/mkSPIWriter.cxx.o: CMakeFiles/top.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/bsvsrc/src/2.DecCounter/zjout/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/top.exe.dir/mkSPIWriter.cxx.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/top.exe.dir/mkSPIWriter.cxx.o -MF CMakeFiles/top.exe.dir/mkSPIWriter.cxx.o.d -o CMakeFiles/top.exe.dir/mkSPIWriter.cxx.o -c /home/jason/bsvsrc/src/2.DecCounter/zjout/mkSPIWriter.cxx

CMakeFiles/top.exe.dir/mkSPIWriter.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/top.exe.dir/mkSPIWriter.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/bsvsrc/src/2.DecCounter/zjout/mkSPIWriter.cxx > CMakeFiles/top.exe.dir/mkSPIWriter.cxx.i

CMakeFiles/top.exe.dir/mkSPIWriter.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/top.exe.dir/mkSPIWriter.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/bsvsrc/src/2.DecCounter/zjout/mkSPIWriter.cxx -o CMakeFiles/top.exe.dir/mkSPIWriter.cxx.s

CMakeFiles/top.exe.dir/mkTb.cxx.o: CMakeFiles/top.exe.dir/flags.make
CMakeFiles/top.exe.dir/mkTb.cxx.o: /home/jason/bsvsrc/src/2.DecCounter/zjout/mkTb.cxx
CMakeFiles/top.exe.dir/mkTb.cxx.o: CMakeFiles/top.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/bsvsrc/src/2.DecCounter/zjout/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/top.exe.dir/mkTb.cxx.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/top.exe.dir/mkTb.cxx.o -MF CMakeFiles/top.exe.dir/mkTb.cxx.o.d -o CMakeFiles/top.exe.dir/mkTb.cxx.o -c /home/jason/bsvsrc/src/2.DecCounter/zjout/mkTb.cxx

CMakeFiles/top.exe.dir/mkTb.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/top.exe.dir/mkTb.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/bsvsrc/src/2.DecCounter/zjout/mkTb.cxx > CMakeFiles/top.exe.dir/mkTb.cxx.i

CMakeFiles/top.exe.dir/mkTb.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/top.exe.dir/mkTb.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/bsvsrc/src/2.DecCounter/zjout/mkTb.cxx -o CMakeFiles/top.exe.dir/mkTb.cxx.s

CMakeFiles/top.exe.dir/model_mkTb.cxx.o: CMakeFiles/top.exe.dir/flags.make
CMakeFiles/top.exe.dir/model_mkTb.cxx.o: /home/jason/bsvsrc/src/2.DecCounter/zjout/model_mkTb.cxx
CMakeFiles/top.exe.dir/model_mkTb.cxx.o: CMakeFiles/top.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/bsvsrc/src/2.DecCounter/zjout/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/top.exe.dir/model_mkTb.cxx.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/top.exe.dir/model_mkTb.cxx.o -MF CMakeFiles/top.exe.dir/model_mkTb.cxx.o.d -o CMakeFiles/top.exe.dir/model_mkTb.cxx.o -c /home/jason/bsvsrc/src/2.DecCounter/zjout/model_mkTb.cxx

CMakeFiles/top.exe.dir/model_mkTb.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/top.exe.dir/model_mkTb.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jason/bsvsrc/src/2.DecCounter/zjout/model_mkTb.cxx > CMakeFiles/top.exe.dir/model_mkTb.cxx.i

CMakeFiles/top.exe.dir/model_mkTb.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/top.exe.dir/model_mkTb.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jason/bsvsrc/src/2.DecCounter/zjout/model_mkTb.cxx -o CMakeFiles/top.exe.dir/model_mkTb.cxx.s

# Object files for target top.exe
top_exe_OBJECTS = \
"CMakeFiles/top.exe.dir/main.cpp.o" \
"CMakeFiles/top.exe.dir/mkDecCounter.cxx.o" \
"CMakeFiles/top.exe.dir/mkSPIWriter.cxx.o" \
"CMakeFiles/top.exe.dir/mkTb.cxx.o" \
"CMakeFiles/top.exe.dir/model_mkTb.cxx.o"

# External object files for target top.exe
top_exe_EXTERNAL_OBJECTS =

top.exe: CMakeFiles/top.exe.dir/main.cpp.o
top.exe: CMakeFiles/top.exe.dir/mkDecCounter.cxx.o
top.exe: CMakeFiles/top.exe.dir/mkSPIWriter.cxx.o
top.exe: CMakeFiles/top.exe.dir/mkTb.cxx.o
top.exe: CMakeFiles/top.exe.dir/model_mkTb.cxx.o
top.exe: CMakeFiles/top.exe.dir/build.make
top.exe: CMakeFiles/top.exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jason/bsvsrc/src/2.DecCounter/zjout/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable top.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/top.exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/top.exe.dir/build: top.exe
.PHONY : CMakeFiles/top.exe.dir/build

CMakeFiles/top.exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/top.exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/top.exe.dir/clean

CMakeFiles/top.exe.dir/depend:
	cd /home/jason/bsvsrc/src/2.DecCounter/zjout/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jason/bsvsrc/src/2.DecCounter/zjout /home/jason/bsvsrc/src/2.DecCounter/zjout /home/jason/bsvsrc/src/2.DecCounter/zjout/build /home/jason/bsvsrc/src/2.DecCounter/zjout/build /home/jason/bsvsrc/src/2.DecCounter/zjout/build/CMakeFiles/top.exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/top.exe.dir/depend

