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
include vendor/googletest/googletest/CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include vendor/googletest/googletest/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include vendor/googletest/googletest/CMakeFiles/gtest.dir/flags.make

vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: vendor/googletest/googletest/CMakeFiles/gtest.dir/flags.make
vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: ../vendor/googletest/googletest/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fillinmar/testNikita/techno-iz1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o"
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/vendor/googletest/googletest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest.dir/src/gtest-all.cc.o -c /home/fillinmar/testNikita/techno-iz1/vendor/googletest/googletest/src/gtest-all.cc

vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/vendor/googletest/googletest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fillinmar/testNikita/techno-iz1/vendor/googletest/googletest/src/gtest-all.cc > CMakeFiles/gtest.dir/src/gtest-all.cc.i

vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/vendor/googletest/googletest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fillinmar/testNikita/techno-iz1/vendor/googletest/googletest/src/gtest-all.cc -o CMakeFiles/gtest.dir/src/gtest-all.cc.s

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.o"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

lib/libgtestd.a: vendor/googletest/googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
lib/libgtestd.a: vendor/googletest/googletest/CMakeFiles/gtest.dir/build.make
lib/libgtestd.a: vendor/googletest/googletest/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fillinmar/testNikita/techno-iz1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/libgtestd.a"
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/vendor/googletest/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean_target.cmake
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/vendor/googletest/googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
vendor/googletest/googletest/CMakeFiles/gtest.dir/build: lib/libgtestd.a

.PHONY : vendor/googletest/googletest/CMakeFiles/gtest.dir/build

vendor/googletest/googletest/CMakeFiles/gtest.dir/clean:
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/vendor/googletest/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : vendor/googletest/googletest/CMakeFiles/gtest.dir/clean

vendor/googletest/googletest/CMakeFiles/gtest.dir/depend:
	cd /home/fillinmar/testNikita/techno-iz1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fillinmar/testNikita/techno-iz1 /home/fillinmar/testNikita/techno-iz1/vendor/googletest/googletest /home/fillinmar/testNikita/techno-iz1/cmake-build-debug /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/vendor/googletest/googletest /home/fillinmar/testNikita/techno-iz1/cmake-build-debug/vendor/googletest/googletest/CMakeFiles/gtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vendor/googletest/googletest/CMakeFiles/gtest.dir/depend

