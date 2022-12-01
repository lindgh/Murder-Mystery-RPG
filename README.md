[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=8910715&assignment_repo_type=AssignmentRepo)

# Murder Mystery RPG
 > Authors: [Rawan Hassabelrasoul](https://github.com/rawanhass), [Angela Han](https://github.com/AngelaHan1), [Adlai Morales-Bravo](https://github.com/AdlaiMB), [Linda Ghunaim](https://github.com/lindgh)

## Project Description
 > Synopsis: In this choose your own adventure story, you'll embark on a mission to unmask the killer that has been terrorizing a town you have just stumbled into. Make decisions that could lead you to victory or death. 

 > Key project points:
 > * We all enjoy horror and coding, so we think it would be interesting to see how we can use our knowledge of coding so far to implement a text-based roleplay game based on a topic we all enjoy.
 > * We plan to implement our project on Virtual Studio Code in the C++ language. We'll utilize CMake to aid with program compilation.
 > * The user will use their keyboard to provide input when prompted. For example, when prompted to choose a decision, the output will tell the use what kind of input it is expected for each character. So if the output tells the user to type 1 to talk to a person at a specific location, the user must input 1 to select that action. We will also validate the user's input to ensure that valid inputs are being provided. Besides giving instructions to the user on how to interact with the program, the output will also be our mode of storytelling through text on the terminal. 
 > * Features our project will provide include an immersive storyline and interactivity with the environment.
 
## Class Diagram 
![UML Design](./updated_diagram.png)

 > ### Description:
 > Within our UML diagram we have five major components that will be utilized to build our game. These components are Location, Detective, ClueFlag, Story, and Choice. We also have subclasses to the Location class, such as, OpeningScene, Diner, Hollands, CountryClub, Mansons, Motel, and Pearls Taxidermy. The Story object is the container for our story. It holds operations for switching scenes of the game. The location class, which is an interface will have gameplay for each scene, and contain clues for the storyline. The subclasses mentioned above implement the logic for each location in our story. The ClueFlag object is to handle the distribution of points. The Choice object is for handling choices that can be made by the user. The Story object will leverage the location class to organize the story. The Detective object represents the user. It will contain functions for user actions, such as interacting with the Story object.  
 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > ![UML Design](./input_output_0.png)
 
 > ![UML Design](./input_output_1.png)

 ## Installation/Usage
 > Our project was written in C++ and created entirely on Virtual Studio Code. To run, have Virtual Studio Code installed. Clone this repository on VS Code so that you have all the proper files. Then, to run the program, run the following lines of code:
 > * cmake .
 > * make
 > * bin/main
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 > We validted our project with gmock and gtest. We did this by creating Mock classes and Mock Methods for our locations and functions. We used it to test our game logic, which was based on user input. We passed in a value (from 1 - max) and made sure that the correct calls were made in each playScene() function for all locations.
 
