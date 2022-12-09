# Dr_PacMan
# Instruction for Execution

•	Install an IDE. (The team developed the game on Clion (Ubuntu) and/or visual studio (Windows)) <br>
•	External Library Required: SFML:  SFML provides a simple interface to the various components of  PC, to ease the development of games and multimedia applications. It is composed of five modules: system, window, graphics, audio and network. In the project, graphics and audio were used. <br>
•	Installation and integration of SFML<br>

# Clion on Ubuntu:
• run the following command on terminal: <br>
• sudo apt-get install libsfml-dev<br>
• The CMakeList.txt needs to be written accordingly. i.e: target_link_libraries(Dr_PacMan ${<add all external libraries here>}) <br>
  
# Visual Studio on Windows:
  
• First of all download SFML Library that your system of IDE easily correspond and work properly with it. <br>
• Downloaded library must matches the version of your IDE  e.g. visual studio etc.<br>
• Now unpack your SFML .<br>
• We first need to tell compiler where to find the SFML Header (.hpp files) and SFML libraries (.lib files).<br>
• Next step is to link your application to SFML libraries that your code will need.<br>
• Libraries must be added in project's properties, in Linker >>input >>additional dependencies.<br><br>
• Only add those libraries that you need.<br>
• If you want to directly add SFML into your executable, you must link to the static version. In this case you will also need to define SFML_STATIC macro in preprocessor options of your project .<br>
• A helpful link is given hereby : https://youtu.be/YfMQyOw1zik<br>
•	Run the code in the IDE.<br>

Note: Screen Resolution = 1366x768  <br>
The game window may not display properly on significantly different screen resolution. <br>

![start](https://user-images.githubusercontent.com/62066608/206679634-11726d97-a19a-43a4-9e93-11150e41153e.png)
![start](https://user-images.githubusercontent.com/62066608/206679667-b59f6fee-6b40-449e-a3dc-27ea06a68922.png)


