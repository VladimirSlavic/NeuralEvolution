# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /opt/clion-2017.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/elrond/CLionProjects/NeuralEvolution

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elrond/CLionProjects/NeuralEvolution/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NeuroEvolution.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NeuroEvolution.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NeuroEvolution.dir/flags.make

CMakeFiles/NeuroEvolution.dir/main.cpp.o: CMakeFiles/NeuroEvolution.dir/flags.make
CMakeFiles/NeuroEvolution.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elrond/CLionProjects/NeuralEvolution/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NeuroEvolution.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NeuroEvolution.dir/main.cpp.o -c /home/elrond/CLionProjects/NeuralEvolution/main.cpp

CMakeFiles/NeuroEvolution.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NeuroEvolution.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elrond/CLionProjects/NeuralEvolution/main.cpp > CMakeFiles/NeuroEvolution.dir/main.cpp.i

CMakeFiles/NeuroEvolution.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NeuroEvolution.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elrond/CLionProjects/NeuralEvolution/main.cpp -o CMakeFiles/NeuroEvolution.dir/main.cpp.s

CMakeFiles/NeuroEvolution.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/NeuroEvolution.dir/main.cpp.o.requires

CMakeFiles/NeuroEvolution.dir/main.cpp.o.provides: CMakeFiles/NeuroEvolution.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/NeuroEvolution.dir/build.make CMakeFiles/NeuroEvolution.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/NeuroEvolution.dir/main.cpp.o.provides

CMakeFiles/NeuroEvolution.dir/main.cpp.o.provides.build: CMakeFiles/NeuroEvolution.dir/main.cpp.o


CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o: CMakeFiles/NeuroEvolution.dir/flags.make
CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o: ../neural/neural_network.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elrond/CLionProjects/NeuralEvolution/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o -c /home/elrond/CLionProjects/NeuralEvolution/neural/neural_network.cpp

CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elrond/CLionProjects/NeuralEvolution/neural/neural_network.cpp > CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.i

CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elrond/CLionProjects/NeuralEvolution/neural/neural_network.cpp -o CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.s

CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o.requires:

.PHONY : CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o.requires

CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o.provides: CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o.requires
	$(MAKE) -f CMakeFiles/NeuroEvolution.dir/build.make CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o.provides.build
.PHONY : CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o.provides

CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o.provides.build: CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o


CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o: CMakeFiles/NeuroEvolution.dir/flags.make
CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o: ../genetics/chromosome.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elrond/CLionProjects/NeuralEvolution/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o -c /home/elrond/CLionProjects/NeuralEvolution/genetics/chromosome.cpp

CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elrond/CLionProjects/NeuralEvolution/genetics/chromosome.cpp > CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.i

CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elrond/CLionProjects/NeuralEvolution/genetics/chromosome.cpp -o CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.s

CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o.requires:

.PHONY : CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o.requires

CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o.provides: CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o.requires
	$(MAKE) -f CMakeFiles/NeuroEvolution.dir/build.make CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o.provides.build
.PHONY : CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o.provides

CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o.provides.build: CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o


CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o: CMakeFiles/NeuroEvolution.dir/flags.make
CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o: ../genetics/population.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elrond/CLionProjects/NeuralEvolution/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o -c /home/elrond/CLionProjects/NeuralEvolution/genetics/population.cpp

CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elrond/CLionProjects/NeuralEvolution/genetics/population.cpp > CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.i

CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elrond/CLionProjects/NeuralEvolution/genetics/population.cpp -o CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.s

CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o.requires:

.PHONY : CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o.requires

CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o.provides: CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o.requires
	$(MAKE) -f CMakeFiles/NeuroEvolution.dir/build.make CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o.provides.build
.PHONY : CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o.provides

CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o.provides.build: CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o


CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o: CMakeFiles/NeuroEvolution.dir/flags.make
CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o: ../evolution_engine/engine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elrond/CLionProjects/NeuralEvolution/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o -c /home/elrond/CLionProjects/NeuralEvolution/evolution_engine/engine.cpp

CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elrond/CLionProjects/NeuralEvolution/evolution_engine/engine.cpp > CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.i

CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elrond/CLionProjects/NeuralEvolution/evolution_engine/engine.cpp -o CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.s

CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o.requires:

.PHONY : CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o.requires

CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o.provides: CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o.requires
	$(MAKE) -f CMakeFiles/NeuroEvolution.dir/build.make CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o.provides.build
.PHONY : CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o.provides

CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o.provides.build: CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o


# Object files for target NeuroEvolution
NeuroEvolution_OBJECTS = \
"CMakeFiles/NeuroEvolution.dir/main.cpp.o" \
"CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o" \
"CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o" \
"CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o" \
"CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o"

# External object files for target NeuroEvolution
NeuroEvolution_EXTERNAL_OBJECTS =

NeuroEvolution: CMakeFiles/NeuroEvolution.dir/main.cpp.o
NeuroEvolution: CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o
NeuroEvolution: CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o
NeuroEvolution: CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o
NeuroEvolution: CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o
NeuroEvolution: CMakeFiles/NeuroEvolution.dir/build.make
NeuroEvolution: CMakeFiles/NeuroEvolution.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elrond/CLionProjects/NeuralEvolution/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable NeuroEvolution"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NeuroEvolution.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NeuroEvolution.dir/build: NeuroEvolution

.PHONY : CMakeFiles/NeuroEvolution.dir/build

CMakeFiles/NeuroEvolution.dir/requires: CMakeFiles/NeuroEvolution.dir/main.cpp.o.requires
CMakeFiles/NeuroEvolution.dir/requires: CMakeFiles/NeuroEvolution.dir/neural/neural_network.cpp.o.requires
CMakeFiles/NeuroEvolution.dir/requires: CMakeFiles/NeuroEvolution.dir/genetics/chromosome.cpp.o.requires
CMakeFiles/NeuroEvolution.dir/requires: CMakeFiles/NeuroEvolution.dir/genetics/population.cpp.o.requires
CMakeFiles/NeuroEvolution.dir/requires: CMakeFiles/NeuroEvolution.dir/evolution_engine/engine.cpp.o.requires

.PHONY : CMakeFiles/NeuroEvolution.dir/requires

CMakeFiles/NeuroEvolution.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NeuroEvolution.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NeuroEvolution.dir/clean

CMakeFiles/NeuroEvolution.dir/depend:
	cd /home/elrond/CLionProjects/NeuralEvolution/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elrond/CLionProjects/NeuralEvolution /home/elrond/CLionProjects/NeuralEvolution /home/elrond/CLionProjects/NeuralEvolution/cmake-build-debug /home/elrond/CLionProjects/NeuralEvolution/cmake-build-debug /home/elrond/CLionProjects/NeuralEvolution/cmake-build-debug/CMakeFiles/NeuroEvolution.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NeuroEvolution.dir/depend

