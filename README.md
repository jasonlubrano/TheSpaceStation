# TheSpaceStation
Prototype for a space themed space RPG game I am creating

Master development branch.
/Src/: Contains all the source files and modules
/Build/: Contains all of the build files

In order to compile a new module in Src directory, add the name of the module to the modules line in make file.

$ make or $ make all
  - Compiles everything in Src folder and store it in the build directory

$ make clean
  - Deletes the entire Build directory

$./build/main.exe
  - Runs the main executible file -> This should be the game
