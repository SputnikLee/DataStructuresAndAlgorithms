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
CMAKE_SOURCE_DIR = "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lec3_task.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lec3_task.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lec3_task.dir/flags.make

CMakeFiles/lec3_task.dir/stack.cpp.o: CMakeFiles/lec3_task.dir/flags.make
CMakeFiles/lec3_task.dir/stack.cpp.o: ../stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lec3_task.dir/stack.cpp.o"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lec3_task.dir/stack.cpp.o -c "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/stack.cpp"

CMakeFiles/lec3_task.dir/stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lec3_task.dir/stack.cpp.i"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/stack.cpp" > CMakeFiles/lec3_task.dir/stack.cpp.i

CMakeFiles/lec3_task.dir/stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lec3_task.dir/stack.cpp.s"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/stack.cpp" -o CMakeFiles/lec3_task.dir/stack.cpp.s

CMakeFiles/lec3_task.dir/main.cpp.o: CMakeFiles/lec3_task.dir/flags.make
CMakeFiles/lec3_task.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lec3_task.dir/main.cpp.o"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lec3_task.dir/main.cpp.o -c "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/main.cpp"

CMakeFiles/lec3_task.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lec3_task.dir/main.cpp.i"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/main.cpp" > CMakeFiles/lec3_task.dir/main.cpp.i

CMakeFiles/lec3_task.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lec3_task.dir/main.cpp.s"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/main.cpp" -o CMakeFiles/lec3_task.dir/main.cpp.s

# Object files for target lec3_task
lec3_task_OBJECTS = \
"CMakeFiles/lec3_task.dir/stack.cpp.o" \
"CMakeFiles/lec3_task.dir/main.cpp.o"

# External object files for target lec3_task
lec3_task_EXTERNAL_OBJECTS =

lec3_task: CMakeFiles/lec3_task.dir/stack.cpp.o
lec3_task: CMakeFiles/lec3_task.dir/main.cpp.o
lec3_task: CMakeFiles/lec3_task.dir/build.make
lec3_task: CMakeFiles/lec3_task.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lec3_task"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lec3_task.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lec3_task.dir/build: lec3_task

.PHONY : CMakeFiles/lec3_task.dir/build

CMakeFiles/lec3_task.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lec3_task.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lec3_task.dir/clean

CMakeFiles/lec3_task.dir/depend:
	cd "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/cmake-build-debug" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/cmake-build-debug" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec3_task/cmake-build-debug/CMakeFiles/lec3_task.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lec3_task.dir/depend

