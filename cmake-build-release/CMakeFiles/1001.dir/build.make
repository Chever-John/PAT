# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.18

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\software\CMake\bin\cmake.exe

# The command to remove a file.
RM = D:\software\CMake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\softengineering\Code\cpp\PAT\PAT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\softengineering\Code\cpp\PAT\PAT\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/1001.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1001.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1001.dir/flags.make

CMakeFiles/1001.dir/1001/1001.cpp.obj: CMakeFiles/1001.dir/flags.make
CMakeFiles/1001.dir/1001/1001.cpp.obj: ../1001/1001.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\softengineering\Code\cpp\PAT\PAT\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1001.dir/1001/1001.cpp.obj"
	D:\software\mingwforvscode\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1001.dir\1001\1001.cpp.obj -c D:\softengineering\Code\cpp\PAT\PAT\1001\1001.cpp

CMakeFiles/1001.dir/1001/1001.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1001.dir/1001/1001.cpp.i"
	D:\software\mingwforvscode\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\softengineering\Code\cpp\PAT\PAT\1001\1001.cpp > CMakeFiles\1001.dir\1001\1001.cpp.i

CMakeFiles/1001.dir/1001/1001.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1001.dir/1001/1001.cpp.s"
	D:\software\mingwforvscode\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\softengineering\Code\cpp\PAT\PAT\1001\1001.cpp -o CMakeFiles\1001.dir\1001\1001.cpp.s

# Object files for target 1001
1001_OBJECTS = \
"CMakeFiles/1001.dir/1001/1001.cpp.obj"

# External object files for target 1001
1001_EXTERNAL_OBJECTS =

1001.exe: CMakeFiles/1001.dir/1001/1001.cpp.obj
1001.exe: CMakeFiles/1001.dir/build.make
1001.exe: CMakeFiles/1001.dir/linklibs.rsp
1001.exe: CMakeFiles/1001.dir/objects1.rsp
1001.exe: CMakeFiles/1001.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\softengineering\Code\cpp\PAT\PAT\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1001.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1001.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1001.dir/build: 1001.exe

.PHONY : CMakeFiles/1001.dir/build

CMakeFiles/1001.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1001.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1001.dir/clean

CMakeFiles/1001.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\softengineering\Code\cpp\PAT\PAT D:\softengineering\Code\cpp\PAT\PAT D:\softengineering\Code\cpp\PAT\PAT\cmake-build-release D:\softengineering\Code\cpp\PAT\PAT\cmake-build-release D:\softengineering\Code\cpp\PAT\PAT\cmake-build-release\CMakeFiles\1001.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1001.dir/depend

