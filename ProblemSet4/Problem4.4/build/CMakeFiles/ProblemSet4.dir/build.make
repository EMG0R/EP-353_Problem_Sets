# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.31.0/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.31.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build

# Include any dependencies generated for this target.
include CMakeFiles/ProblemSet4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ProblemSet4.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ProblemSet4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProblemSet4.dir/flags.make

ProblemSet4_artefacts/JuceLibraryCode/JuceHeader.h: ProblemSet4_artefacts/JuceLibraryCode/Defs.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ProblemSet4_artefacts/JuceLibraryCode/JuceHeader.h"
	JUCE/tools/extras/Build/juceaide/juceaide_artefacts/Debug/juceaide header /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build/ProblemSet4_artefacts/JuceLibraryCode//Defs.txt /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build/ProblemSet4_artefacts/JuceLibraryCode/JuceHeader.h

CMakeFiles/ProblemSet4.dir/codegen:
.PHONY : CMakeFiles/ProblemSet4.dir/codegen

CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.o: CMakeFiles/ProblemSet4.dir/flags.make
CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.o: /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/Problem4.4.cpp
CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.o: CMakeFiles/ProblemSet4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.o -MF CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.o.d -o CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.o -c /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/Problem4.4.cpp

CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/Problem4.4.cpp > CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.i

CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/Problem4.4.cpp -o CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.s

CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.o: CMakeFiles/ProblemSet4.dir/flags.make
CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.o: /Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp
CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.o: CMakeFiles/ProblemSet4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.o -MF CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.o.d -o CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.o -c /Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp

CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp > CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.i

CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp -o CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.s

CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.o: CMakeFiles/ProblemSet4.dir/flags.make
CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.o: /Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm
CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.o: CMakeFiles/ProblemSet4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.o -MF CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.o.d -o CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.o -c /Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm

CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm > CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.i

CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm -o CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.s

CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o: CMakeFiles/ProblemSet4.dir/flags.make
CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o: /Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm
CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o: CMakeFiles/ProblemSet4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o -MF CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o.d -o CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o -c /Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm

CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm > CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.i

CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm -o CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.s

CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o: CMakeFiles/ProblemSet4.dir/flags.make
CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o: /Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm
CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o: CMakeFiles/ProblemSet4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o -MF CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o.d -o CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o -c /Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm

CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm > CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.i

CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm -o CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.s

# Object files for target ProblemSet4
ProblemSet4_OBJECTS = \
"CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.o" \
"CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.o" \
"CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.o" \
"CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o" \
"CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o"

# External object files for target ProblemSet4
ProblemSet4_EXTERNAL_OBJECTS =

bin/ProblemSet4: CMakeFiles/ProblemSet4.dir/Problem4.4.cpp.o
bin/ProblemSet4: CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core_CompilationTime.cpp.o
bin/ProblemSet4: CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_core/juce_core.mm.o
bin/ProblemSet4: CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_basics/juce_audio_basics.mm.o
bin/ProblemSet4: CMakeFiles/ProblemSet4.dir/Users/emgor/Documents/JUCE/modules/juce_audio_formats/juce_audio_formats.mm.o
bin/ProblemSet4: CMakeFiles/ProblemSet4.dir/build.make
bin/ProblemSet4: CMakeFiles/ProblemSet4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable bin/ProblemSet4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProblemSet4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProblemSet4.dir/build: bin/ProblemSet4
.PHONY : CMakeFiles/ProblemSet4.dir/build

CMakeFiles/ProblemSet4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ProblemSet4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ProblemSet4.dir/clean

CMakeFiles/ProblemSet4.dir/depend: ProblemSet4_artefacts/JuceLibraryCode/JuceHeader.h
	cd /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4 /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4 /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build /Users/emgor/Documents/EP-353_Problem_Sets/ProblemSet4/Problem4.4/build/CMakeFiles/ProblemSet4.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/ProblemSet4.dir/depend

