# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = "/Users/Sputniklee/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/Sputniklee/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/WA_problem4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/WA_problem4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/WA_problem4.dir/flags.make

CMakeFiles/WA_problem4.dir/main.cpp.o: CMakeFiles/WA_problem4.dir/flags.make
CMakeFiles/WA_problem4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/WA_problem4.dir/main.cpp.o"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WA_problem4.dir/main.cpp.o -c "/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4/main.cpp"

CMakeFiles/WA_problem4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WA_problem4.dir/main.cpp.i"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4/main.cpp" > CMakeFiles/WA_problem4.dir/main.cpp.i

CMakeFiles/WA_problem4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WA_problem4.dir/main.cpp.s"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4/main.cpp" -o CMakeFiles/WA_problem4.dir/main.cpp.s

# Object files for target WA_problem4
WA_problem4_OBJECTS = \
"CMakeFiles/WA_problem4.dir/main.cpp.o"

# External object files for target WA_problem4
WA_problem4_EXTERNAL_OBJECTS =

WA_problem4: CMakeFiles/WA_problem4.dir/main.cpp.o
WA_problem4: CMakeFiles/WA_problem4.dir/build.make
WA_problem4: CMakeFiles/WA_problem4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable WA_problem4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/WA_problem4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/WA_problem4.dir/build: WA_problem4

.PHONY : CMakeFiles/WA_problem4.dir/build

CMakeFiles/WA_problem4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/WA_problem4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/WA_problem4.dir/clean

CMakeFiles/WA_problem4.dir/depend:
	cd "/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4/cmake-build-debug" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4/cmake-build-debug" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/WA_problem4/cmake-build-debug/CMakeFiles/WA_problem4.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/WA_problem4.dir/depend

