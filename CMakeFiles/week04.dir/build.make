# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspaces/CPP-Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/CPP-Project

# Include any dependencies generated for this target.
include CMakeFiles/week04.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/week04.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/week04.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/week04.dir/flags.make

CMakeFiles/week04.dir/src/week04.cpp.o: CMakeFiles/week04.dir/flags.make
CMakeFiles/week04.dir/src/week04.cpp.o: src/week04.cpp
CMakeFiles/week04.dir/src/week04.cpp.o: CMakeFiles/week04.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/CPP-Project/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/week04.dir/src/week04.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/week04.dir/src/week04.cpp.o -MF CMakeFiles/week04.dir/src/week04.cpp.o.d -o CMakeFiles/week04.dir/src/week04.cpp.o -c /workspaces/CPP-Project/src/week04.cpp

CMakeFiles/week04.dir/src/week04.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/week04.dir/src/week04.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/CPP-Project/src/week04.cpp > CMakeFiles/week04.dir/src/week04.cpp.i

CMakeFiles/week04.dir/src/week04.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/week04.dir/src/week04.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/CPP-Project/src/week04.cpp -o CMakeFiles/week04.dir/src/week04.cpp.s

# Object files for target week04
week04_OBJECTS = \
"CMakeFiles/week04.dir/src/week04.cpp.o"

# External object files for target week04
week04_EXTERNAL_OBJECTS =

week04: CMakeFiles/week04.dir/src/week04.cpp.o
week04: CMakeFiles/week04.dir/build.make
week04: CMakeFiles/week04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/CPP-Project/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable week04"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/week04.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/week04.dir/build: week04
.PHONY : CMakeFiles/week04.dir/build

CMakeFiles/week04.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/week04.dir/cmake_clean.cmake
.PHONY : CMakeFiles/week04.dir/clean

CMakeFiles/week04.dir/depend:
	cd /workspaces/CPP-Project && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/CPP-Project /workspaces/CPP-Project /workspaces/CPP-Project /workspaces/CPP-Project /workspaces/CPP-Project/CMakeFiles/week04.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/week04.dir/depend

