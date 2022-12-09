# Dr_PacMan
# Instruction for Execution

•	Install an IDE. (The team developed the game on Clion (Ubuntu) and/or visual studio (Windows))
•	External Library Required: SFML:  SFML provides a simple interface to the various components of  PC, to ease the development of games and multimedia applications. It is composed of five modules: system, window, graphics, audio and network. In the project, graphics and audio were used.
•	Installation and integration of SFML

# Clion on Ubuntu:
• run the following command on terminal:
• sudo apt-get install libsfml-dev
• The CMakeList.txt needs to be written accordingly. i.e: target_link_libraries(Dr_PacMan ${<add all external libraries here>})
  
# Visual Studio on Windows:
  
• First of all download SFML Library that your system of IDE easily correspond and work properly with it.
Downloaded library must matches the version of your IDE  e.g. visual studio etc.
Now unpack your SFML .
We first need to tell compiler where to find the SFML Header (.hpp files) and SFML libraries (.lib files).
Next step is to link your application to SFML libraries that your code will need.
Libraries must be added in project's properties, in Linker >>input >>additional dependencies.
Only add those libraries that you need.
If you want to directly add SFML into your executable, you must link to the static version. In this case you will also need to define SFML_STATIC macro in preprocessor options of your project .
A helpful link is given hereby : https://youtu.be/YfMQyOw1zik
•	Run the code in the IDE.

Note: Screen Resolution = 1366x768
The game window may not display properly on significantly different screen resolution.

