# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /opt/clion-2019.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mariam/Dr_PacMan

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mariam/Dr_PacMan/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Dr_PacMan.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Dr_PacMan.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Dr_PacMan.dir/flags.make

CMakeFiles/Dr_PacMan.dir/main.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Dr_PacMan.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/main.cpp.o -c /home/mariam/Dr_PacMan/main.cpp

CMakeFiles/Dr_PacMan.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/main.cpp > CMakeFiles/Dr_PacMan.dir/main.cpp.i

CMakeFiles/Dr_PacMan.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/main.cpp -o CMakeFiles/Dr_PacMan.dir/main.cpp.s

CMakeFiles/Dr_PacMan.dir/game.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/game.cpp.o: ../game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Dr_PacMan.dir/game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/game.cpp.o -c /home/mariam/Dr_PacMan/game.cpp

CMakeFiles/Dr_PacMan.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/game.cpp > CMakeFiles/Dr_PacMan.dir/game.cpp.i

CMakeFiles/Dr_PacMan.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/game.cpp -o CMakeFiles/Dr_PacMan.dir/game.cpp.s

CMakeFiles/Dr_PacMan.dir/MenuState.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/MenuState.cpp.o: ../MenuState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Dr_PacMan.dir/MenuState.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/MenuState.cpp.o -c /home/mariam/Dr_PacMan/MenuState.cpp

CMakeFiles/Dr_PacMan.dir/MenuState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/MenuState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/MenuState.cpp > CMakeFiles/Dr_PacMan.dir/MenuState.cpp.i

CMakeFiles/Dr_PacMan.dir/MenuState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/MenuState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/MenuState.cpp -o CMakeFiles/Dr_PacMan.dir/MenuState.cpp.s

CMakeFiles/Dr_PacMan.dir/PlayState.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/PlayState.cpp.o: ../PlayState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Dr_PacMan.dir/PlayState.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/PlayState.cpp.o -c /home/mariam/Dr_PacMan/PlayState.cpp

CMakeFiles/Dr_PacMan.dir/PlayState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/PlayState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/PlayState.cpp > CMakeFiles/Dr_PacMan.dir/PlayState.cpp.i

CMakeFiles/Dr_PacMan.dir/PlayState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/PlayState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/PlayState.cpp -o CMakeFiles/Dr_PacMan.dir/PlayState.cpp.s

CMakeFiles/Dr_PacMan.dir/Load_Sprites.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/Load_Sprites.cpp.o: ../Load_Sprites.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Dr_PacMan.dir/Load_Sprites.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/Load_Sprites.cpp.o -c /home/mariam/Dr_PacMan/Load_Sprites.cpp

CMakeFiles/Dr_PacMan.dir/Load_Sprites.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/Load_Sprites.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/Load_Sprites.cpp > CMakeFiles/Dr_PacMan.dir/Load_Sprites.cpp.i

CMakeFiles/Dr_PacMan.dir/Load_Sprites.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/Load_Sprites.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/Load_Sprites.cpp -o CMakeFiles/Dr_PacMan.dir/Load_Sprites.cpp.s

CMakeFiles/Dr_PacMan.dir/Object.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/Object.cpp.o: ../Object.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Dr_PacMan.dir/Object.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/Object.cpp.o -c /home/mariam/Dr_PacMan/Object.cpp

CMakeFiles/Dr_PacMan.dir/Object.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/Object.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/Object.cpp > CMakeFiles/Dr_PacMan.dir/Object.cpp.i

CMakeFiles/Dr_PacMan.dir/Object.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/Object.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/Object.cpp -o CMakeFiles/Dr_PacMan.dir/Object.cpp.s

CMakeFiles/Dr_PacMan.dir/Tile_Map.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/Tile_Map.cpp.o: ../Tile_Map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Dr_PacMan.dir/Tile_Map.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/Tile_Map.cpp.o -c /home/mariam/Dr_PacMan/Tile_Map.cpp

CMakeFiles/Dr_PacMan.dir/Tile_Map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/Tile_Map.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/Tile_Map.cpp > CMakeFiles/Dr_PacMan.dir/Tile_Map.cpp.i

CMakeFiles/Dr_PacMan.dir/Tile_Map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/Tile_Map.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/Tile_Map.cpp -o CMakeFiles/Dr_PacMan.dir/Tile_Map.cpp.s

CMakeFiles/Dr_PacMan.dir/Collision_Tiles.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/Collision_Tiles.cpp.o: ../Collision_Tiles.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Dr_PacMan.dir/Collision_Tiles.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/Collision_Tiles.cpp.o -c /home/mariam/Dr_PacMan/Collision_Tiles.cpp

CMakeFiles/Dr_PacMan.dir/Collision_Tiles.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/Collision_Tiles.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/Collision_Tiles.cpp > CMakeFiles/Dr_PacMan.dir/Collision_Tiles.cpp.i

CMakeFiles/Dr_PacMan.dir/Collision_Tiles.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/Collision_Tiles.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/Collision_Tiles.cpp -o CMakeFiles/Dr_PacMan.dir/Collision_Tiles.cpp.s

CMakeFiles/Dr_PacMan.dir/Player.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Dr_PacMan.dir/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/Player.cpp.o -c /home/mariam/Dr_PacMan/Player.cpp

CMakeFiles/Dr_PacMan.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/Player.cpp > CMakeFiles/Dr_PacMan.dir/Player.cpp.i

CMakeFiles/Dr_PacMan.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/Player.cpp -o CMakeFiles/Dr_PacMan.dir/Player.cpp.s

CMakeFiles/Dr_PacMan.dir/Ghost.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/Ghost.cpp.o: ../Ghost.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Dr_PacMan.dir/Ghost.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/Ghost.cpp.o -c /home/mariam/Dr_PacMan/Ghost.cpp

CMakeFiles/Dr_PacMan.dir/Ghost.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/Ghost.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/Ghost.cpp > CMakeFiles/Dr_PacMan.dir/Ghost.cpp.i

CMakeFiles/Dr_PacMan.dir/Ghost.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/Ghost.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/Ghost.cpp -o CMakeFiles/Dr_PacMan.dir/Ghost.cpp.s

CMakeFiles/Dr_PacMan.dir/kidghost.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/kidghost.cpp.o: ../kidghost.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Dr_PacMan.dir/kidghost.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/kidghost.cpp.o -c /home/mariam/Dr_PacMan/kidghost.cpp

CMakeFiles/Dr_PacMan.dir/kidghost.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/kidghost.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/kidghost.cpp > CMakeFiles/Dr_PacMan.dir/kidghost.cpp.i

CMakeFiles/Dr_PacMan.dir/kidghost.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/kidghost.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/kidghost.cpp -o CMakeFiles/Dr_PacMan.dir/kidghost.cpp.s

CMakeFiles/Dr_PacMan.dir/Help_File.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/Help_File.cpp.o: ../Help_File.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Dr_PacMan.dir/Help_File.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/Help_File.cpp.o -c /home/mariam/Dr_PacMan/Help_File.cpp

CMakeFiles/Dr_PacMan.dir/Help_File.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/Help_File.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/Help_File.cpp > CMakeFiles/Dr_PacMan.dir/Help_File.cpp.i

CMakeFiles/Dr_PacMan.dir/Help_File.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/Help_File.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/Help_File.cpp -o CMakeFiles/Dr_PacMan.dir/Help_File.cpp.s

CMakeFiles/Dr_PacMan.dir/initialBack.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/initialBack.cpp.o: ../initialBack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Dr_PacMan.dir/initialBack.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/initialBack.cpp.o -c /home/mariam/Dr_PacMan/initialBack.cpp

CMakeFiles/Dr_PacMan.dir/initialBack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/initialBack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/initialBack.cpp > CMakeFiles/Dr_PacMan.dir/initialBack.cpp.i

CMakeFiles/Dr_PacMan.dir/initialBack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/initialBack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/initialBack.cpp -o CMakeFiles/Dr_PacMan.dir/initialBack.cpp.s

CMakeFiles/Dr_PacMan.dir/Ghost3.cpp.o: CMakeFiles/Dr_PacMan.dir/flags.make
CMakeFiles/Dr_PacMan.dir/Ghost3.cpp.o: ../Ghost3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Dr_PacMan.dir/Ghost3.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dr_PacMan.dir/Ghost3.cpp.o -c /home/mariam/Dr_PacMan/Ghost3.cpp

CMakeFiles/Dr_PacMan.dir/Ghost3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dr_PacMan.dir/Ghost3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mariam/Dr_PacMan/Ghost3.cpp > CMakeFiles/Dr_PacMan.dir/Ghost3.cpp.i

CMakeFiles/Dr_PacMan.dir/Ghost3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dr_PacMan.dir/Ghost3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mariam/Dr_PacMan/Ghost3.cpp -o CMakeFiles/Dr_PacMan.dir/Ghost3.cpp.s

# Object files for target Dr_PacMan
Dr_PacMan_OBJECTS = \
"CMakeFiles/Dr_PacMan.dir/main.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/game.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/MenuState.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/PlayState.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/Load_Sprites.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/Object.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/Tile_Map.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/Collision_Tiles.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/Player.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/Ghost.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/kidghost.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/Help_File.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/initialBack.cpp.o" \
"CMakeFiles/Dr_PacMan.dir/Ghost3.cpp.o"

# External object files for target Dr_PacMan
Dr_PacMan_EXTERNAL_OBJECTS =

Dr_PacMan: CMakeFiles/Dr_PacMan.dir/main.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/game.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/MenuState.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/PlayState.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/Load_Sprites.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/Object.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/Tile_Map.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/Collision_Tiles.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/Player.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/Ghost.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/kidghost.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/Help_File.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/initialBack.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/Ghost3.cpp.o
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/build.make
Dr_PacMan: CMakeFiles/Dr_PacMan.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable Dr_PacMan"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Dr_PacMan.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Dr_PacMan.dir/build: Dr_PacMan

.PHONY : CMakeFiles/Dr_PacMan.dir/build

CMakeFiles/Dr_PacMan.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Dr_PacMan.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Dr_PacMan.dir/clean

CMakeFiles/Dr_PacMan.dir/depend:
	cd /home/mariam/Dr_PacMan/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mariam/Dr_PacMan /home/mariam/Dr_PacMan /home/mariam/Dr_PacMan/cmake-build-debug /home/mariam/Dr_PacMan/cmake-build-debug /home/mariam/Dr_PacMan/cmake-build-debug/CMakeFiles/Dr_PacMan.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Dr_PacMan.dir/depend

