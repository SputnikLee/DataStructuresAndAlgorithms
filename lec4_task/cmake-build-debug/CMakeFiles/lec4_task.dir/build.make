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
CMAKE_SOURCE_DIR = "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lec4_task.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lec4_task.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lec4_task.dir/flags.make

CMakeFiles/lec4_task.dir/main.cpp.o: CMakeFiles/lec4_task.dir/flags.make
CMakeFiles/lec4_task.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lec4_task.dir/main.cpp.o"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lec4_task.dir/main.cpp.o -c "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/main.cpp"

CMakeFiles/lec4_task.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lec4_task.dir/main.cpp.i"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/main.cpp" > CMakeFiles/lec4_task.dir/main.cpp.i

CMakeFiles/lec4_task.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lec4_task.dir/main.cpp.s"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/main.cpp" -o CMakeFiles/lec4_task.dir/main.cpp.s

CMakeFiles/lec4_task.dir/queue.cpp.o: CMakeFiles/lec4_task.dir/flags.make
CMakeFiles/lec4_task.dir/queue.cpp.o: ../queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lec4_task.dir/queue.cpp.o"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lec4_task.dir/queue.cpp.o -c "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/queue.cpp"

CMakeFiles/lec4_task.dir/queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lec4_task.dir/queue.cpp.i"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/queue.cpp" > CMakeFiles/lec4_task.dir/queue.cpp.i

CMakeFiles/lec4_task.dir/queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lec4_task.dir/queue.cpp.s"
	/usr/local/Cellar/gcc@7/7.3.0/bin/g++-7 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/queue.cpp" -o CMakeFiles/lec4_task.dir/queue.cpp.s

# Object files for target lec4_task
lec4_task_OBJECTS = \
"CMakeFiles/lec4_task.dir/main.cpp.o" \
"CMakeFiles/lec4_task.dir/queue.cpp.o"

# External object files for target lec4_task
lec4_task_EXTERNAL_OBJECTS =

lec4_task: CMakeFiles/lec4_task.dir/main.cpp.o
lec4_task: CMakeFiles/lec4_task.dir/queue.cpp.o
lec4_task: CMakeFiles/lec4_task.dir/build.make
lec4_task: CMakeFiles/lec4_task.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable lec4_task"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lec4_task.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lec4_task.dir/build: lec4_task

.PHONY : CMakeFiles/lec4_task.dir/build

CMakeFiles/lec4_task.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lec4_task.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lec4_task.dir/clean

CMakeFiles/lec4_task.dir/depend:
	cd "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/cmake-build-debug" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/cmake-build-debug" "/Users/Sputniklee/Desktop/Data Structures and Algorithms/lec4_task/cmake-build-debug/CMakeFiles/lec4_task.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lec4_task.dir/depend

