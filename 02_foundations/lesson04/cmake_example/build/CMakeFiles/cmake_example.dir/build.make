# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/build

# Include any dependencies generated for this target.
include CMakeFiles/cmake_example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmake_example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmake_example.dir/flags.make

CMakeFiles/cmake_example.dir/src/main.cpp.o: CMakeFiles/cmake_example.dir/flags.make
CMakeFiles/cmake_example.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cmake_example.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cmake_example.dir/src/main.cpp.o -c /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/src/main.cpp

CMakeFiles/cmake_example.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmake_example.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/src/main.cpp > CMakeFiles/cmake_example.dir/src/main.cpp.i

CMakeFiles/cmake_example.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmake_example.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/src/main.cpp -o CMakeFiles/cmake_example.dir/src/main.cpp.s

CMakeFiles/cmake_example.dir/src/vect_add_one.cpp.o: CMakeFiles/cmake_example.dir/flags.make
CMakeFiles/cmake_example.dir/src/vect_add_one.cpp.o: ../src/vect_add_one.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cmake_example.dir/src/vect_add_one.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cmake_example.dir/src/vect_add_one.cpp.o -c /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/src/vect_add_one.cpp

CMakeFiles/cmake_example.dir/src/vect_add_one.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmake_example.dir/src/vect_add_one.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/src/vect_add_one.cpp > CMakeFiles/cmake_example.dir/src/vect_add_one.cpp.i

CMakeFiles/cmake_example.dir/src/vect_add_one.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmake_example.dir/src/vect_add_one.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/src/vect_add_one.cpp -o CMakeFiles/cmake_example.dir/src/vect_add_one.cpp.s

CMakeFiles/cmake_example.dir/src/increment_and_sum.cpp.o: CMakeFiles/cmake_example.dir/flags.make
CMakeFiles/cmake_example.dir/src/increment_and_sum.cpp.o: ../src/increment_and_sum.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cmake_example.dir/src/increment_and_sum.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cmake_example.dir/src/increment_and_sum.cpp.o -c /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/src/increment_and_sum.cpp

CMakeFiles/cmake_example.dir/src/increment_and_sum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmake_example.dir/src/increment_and_sum.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/src/increment_and_sum.cpp > CMakeFiles/cmake_example.dir/src/increment_and_sum.cpp.i

CMakeFiles/cmake_example.dir/src/increment_and_sum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmake_example.dir/src/increment_and_sum.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/src/increment_and_sum.cpp -o CMakeFiles/cmake_example.dir/src/increment_and_sum.cpp.s

# Object files for target cmake_example
cmake_example_OBJECTS = \
"CMakeFiles/cmake_example.dir/src/main.cpp.o" \
"CMakeFiles/cmake_example.dir/src/vect_add_one.cpp.o" \
"CMakeFiles/cmake_example.dir/src/increment_and_sum.cpp.o"

# External object files for target cmake_example
cmake_example_EXTERNAL_OBJECTS =

cmake_example: CMakeFiles/cmake_example.dir/src/main.cpp.o
cmake_example: CMakeFiles/cmake_example.dir/src/vect_add_one.cpp.o
cmake_example: CMakeFiles/cmake_example.dir/src/increment_and_sum.cpp.o
cmake_example: CMakeFiles/cmake_example.dir/build.make
cmake_example: CMakeFiles/cmake_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable cmake_example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmake_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmake_example.dir/build: cmake_example

.PHONY : CMakeFiles/cmake_example.dir/build

CMakeFiles/cmake_example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmake_example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmake_example.dir/clean

CMakeFiles/cmake_example.dir/depend:
	cd /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/build /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/build /home/richard/Documents/udacity_cpp/02_foundations/lesson04/cmake_example/build/CMakeFiles/cmake_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cmake_example.dir/depend

