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
CMAKE_COMMAND = /snap/clion/139/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/139/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fillinmar/testNikita/techno-iz1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fillinmar/testNikita/techno-iz1/cmake-build-debug

# Include any dependencies generated for this target.
include tests/unit/storage/CMakeFiles/storage_test.dir/depend.make

# Include the progress variables for this target.
include tests/unit/storage/CMakeFiles/storage_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/unit/storage/CMakeFiles/storage_test.dir/flags.make

tests/unit/storage/CMakeFiles/storage_test.dir/main.cpp.o: tests/unit/storage/CMakeFiles/storage_test.dir/flags.make
tests/unit/storage/CMakeFiles/storage_test.dir/main.cpp.o: ../tests/unit/storage/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fillinmar/testNikita/techno-iz1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/unit/storage/CMakeFiles/storage_test.dir/main.cpp.o"
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/tests/unit/storage && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/storage_test.dir/main.cpp.o -c /home/fillinmar/testNikita/techno-iz1/tests/unit/storage/main.cpp

tests/unit/storage/CMakeFiles/storage_test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/storage_test.dir/main.cpp.i"
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/tests/unit/storage && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fillinmar/testNikita/techno-iz1/tests/unit/storage/main.cpp > CMakeFiles/storage_test.dir/main.cpp.i

tests/unit/storage/CMakeFiles/storage_test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/storage_test.dir/main.cpp.s"
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/tests/unit/storage && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fillinmar/testNikita/techno-iz1/tests/unit/storage/main.cpp -o CMakeFiles/storage_test.dir/main.cpp.s

tests/unit/storage/CMakeFiles/storage_test.dir/storage.cpp.o: tests/unit/storage/CMakeFiles/storage_test.dir/flags.make
tests/unit/storage/CMakeFiles/storage_test.dir/storage.cpp.o: ../tests/unit/storage/storage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fillinmar/testNikita/techno-iz1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/unit/storage/CMakeFiles/storage_test.dir/storage.cpp.o"
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/tests/unit/storage && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/storage_test.dir/storage.cpp.o -c /home/fillinmar/testNikita/techno-iz1/tests/unit/storage/storage.cpp

tests/unit/storage/CMakeFiles/storage_test.dir/storage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/storage_test.dir/storage.cpp.i"
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/tests/unit/storage && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fillinmar/testNikita/techno-iz1/tests/unit/storage/storage.cpp > CMakeFiles/storage_test.dir/storage.cpp.i

tests/unit/storage/CMakeFiles/storage_test.dir/storage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/storage_test.dir/storage.cpp.s"
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/tests/unit/storage && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fillinmar/testNikita/techno-iz1/tests/unit/storage/storage.cpp -o CMakeFiles/storage_test.dir/storage.cpp.s

# Object files for target storage_test
storage_test_OBJECTS = \
"CMakeFiles/storage_test.dir/main.cpp.o" \
"CMakeFiles/storage_test.dir/storage.cpp.o"

# External object files for target storage_test
storage_test_EXTERNAL_OBJECTS =

tests/unit/storage/storage_test: tests/unit/storage/CMakeFiles/storage_test.dir/main.cpp.o
tests/unit/storage/storage_test: tests/unit/storage/CMakeFiles/storage_test.dir/storage.cpp.o
tests/unit/storage/storage_test: tests/unit/storage/CMakeFiles/storage_test.dir/build.make
tests/unit/storage/storage_test: src/storage/libstorage.a
tests/unit/storage/storage_test: lib/libgtestd.a
tests/unit/storage/storage_test: tests/unit/storage/CMakeFiles/storage_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fillinmar/testNikita/techno-iz1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable storage_test"
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/tests/unit/storage && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/storage_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/unit/storage/CMakeFiles/storage_test.dir/build: tests/unit/storage/storage_test

.PHONY : tests/unit/storage/CMakeFiles/storage_test.dir/build

tests/unit/storage/CMakeFiles/storage_test.dir/clean:
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/tests/unit/storage && $(CMAKE_COMMAND) -P CMakeFiles/storage_test.dir/cmake_clean.cmake
.PHONY : tests/unit/storage/CMakeFiles/storage_test.dir/clean

tests/unit/storage/CMakeFiles/storage_test.dir/depend:
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fillinmar/testNikita/techno-iz1 /home/fillinmar/testNikita/techno-iz1/tests/unit/storage /home/fillinmar/testNikita/techno-iz1/cmake-build-debug /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/tests/unit/storage /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/tests/unit/storage/CMakeFiles/storage_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/unit/storage/CMakeFiles/storage_test.dir/depend

