#Tutorial
##Generic tutorial
 - clone this repository 
 - create a new project in whatever tool you like (or open a existing demo)
 - add the subfolder Lib from this repository to your include paths (-I directive in GCC)
 - set your compilers dialect to C++11 (-std=c++11 directive in GCC)
 - include the corresponding chip file for the chip you are using (eg. for MKL27Z256xxx include the file "Chip/MKL27Z4.hpp")
 - now you are ready to use Kvasir
 
##Lpcxpresso
 - clone repository to a folder of your choice (lets call it [root])
 - open lpcxpresso
 - select file->new->project->C/C++->c++ Project->Empty Project
 - name it whatever you want
 - next then next then select your part and click finish
 - drag the folder [root]/Demos/Blinky/src onto your project folder in lpcxpresso and klick ok
 - right click on your project and select properties
 - select C++ Build -> Settings -> MCU C++ Compiler -> Dialect -> ISO C++11
 - select includes and add a new include path to [root]/Lib
 - compile and run
 
 
