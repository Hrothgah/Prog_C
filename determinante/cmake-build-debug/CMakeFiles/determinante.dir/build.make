# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\hroth\CLionProjects\determinante

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\hroth\CLionProjects\determinante\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/determinante.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/determinante.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/determinante.dir/flags.make

CMakeFiles/determinante.dir/main.c.obj: CMakeFiles/determinante.dir/flags.make
CMakeFiles/determinante.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\hroth\CLionProjects\determinante\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/determinante.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\determinante.dir\main.c.obj   -c C:\Users\hroth\CLionProjects\determinante\main.c

CMakeFiles/determinante.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/determinante.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\hroth\CLionProjects\determinante\main.c > CMakeFiles\determinante.dir\main.c.i

CMakeFiles/determinante.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/determinante.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\hroth\CLionProjects\determinante\main.c -o CMakeFiles\determinante.dir\main.c.s

CMakeFiles/determinante.dir/main.c.obj.requires:

.PHONY : CMakeFiles/determinante.dir/main.c.obj.requires

CMakeFiles/determinante.dir/main.c.obj.provides: CMakeFiles/determinante.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\determinante.dir\build.make CMakeFiles/determinante.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/determinante.dir/main.c.obj.provides

CMakeFiles/determinante.dir/main.c.obj.provides.build: CMakeFiles/determinante.dir/main.c.obj


# Object files for target determinante
determinante_OBJECTS = \
"CMakeFiles/determinante.dir/main.c.obj"

# External object files for target determinante
determinante_EXTERNAL_OBJECTS =

determinante.exe: CMakeFiles/determinante.dir/main.c.obj
determinante.exe: CMakeFiles/determinante.dir/build.make
determinante.exe: CMakeFiles/determinante.dir/linklibs.rsp
determinante.exe: CMakeFiles/determinante.dir/objects1.rsp
determinante.exe: CMakeFiles/determinante.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\hroth\CLionProjects\determinante\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable determinante.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\determinante.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/determinante.dir/build: determinante.exe

.PHONY : CMakeFiles/determinante.dir/build

CMakeFiles/determinante.dir/requires: CMakeFiles/determinante.dir/main.c.obj.requires

.PHONY : CMakeFiles/determinante.dir/requires

CMakeFiles/determinante.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\determinante.dir\cmake_clean.cmake
.PHONY : CMakeFiles/determinante.dir/clean

CMakeFiles/determinante.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\hroth\CLionProjects\determinante C:\Users\hroth\CLionProjects\determinante C:\Users\hroth\CLionProjects\determinante\cmake-build-debug C:\Users\hroth\CLionProjects\determinante\cmake-build-debug C:\Users\hroth\CLionProjects\determinante\cmake-build-debug\CMakeFiles\determinante.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/determinante.dir/depend

