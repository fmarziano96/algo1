# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/138/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/138/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/franco/CLionProjects/labo01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/franco/CLionProjects/labo01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/labo01.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/labo01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/labo01.dir/flags.make

CMakeFiles/labo01.dir/ej07.cpp.o: CMakeFiles/labo01.dir/flags.make
CMakeFiles/labo01.dir/ej07.cpp.o: ../ej07.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/franco/CLionProjects/labo01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/labo01.dir/ej07.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/labo01.dir/ej07.cpp.o -c /home/franco/CLionProjects/labo01/ej07.cpp

CMakeFiles/labo01.dir/ej07.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/labo01.dir/ej07.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/franco/CLionProjects/labo01/ej07.cpp > CMakeFiles/labo01.dir/ej07.cpp.i

CMakeFiles/labo01.dir/ej07.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/labo01.dir/ej07.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/franco/CLionProjects/labo01/ej07.cpp -o CMakeFiles/labo01.dir/ej07.cpp.s

# Object files for target labo01
labo01_OBJECTS = \
"CMakeFiles/labo01.dir/ej07.cpp.o"

# External object files for target labo01
labo01_EXTERNAL_OBJECTS =

labo01: CMakeFiles/labo01.dir/ej07.cpp.o
labo01: CMakeFiles/labo01.dir/build.make
labo01: CMakeFiles/labo01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/franco/CLionProjects/labo01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable labo01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/labo01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/labo01.dir/build: labo01

.PHONY : CMakeFiles/labo01.dir/build

CMakeFiles/labo01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/labo01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/labo01.dir/clean

CMakeFiles/labo01.dir/depend:
	cd /home/franco/CLionProjects/labo01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/franco/CLionProjects/labo01 /home/franco/CLionProjects/labo01 /home/franco/CLionProjects/labo01/cmake-build-debug /home/franco/CLionProjects/labo01/cmake-build-debug /home/franco/CLionProjects/labo01/cmake-build-debug/CMakeFiles/labo01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/labo01.dir/depend

