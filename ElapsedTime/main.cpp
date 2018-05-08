//==========================================================
//
// Title: ElapsedTime
// Author: Mercyllia Harmon
// Description:
// Caculating ElapsedTime
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout", for example.

int main()
{
    //Declare variables
    int time;
    int hour, min, sec;
    
    // Show application header
    cout << " Welcome to my Application!" << endl;
    cout << "___________________________" << endl;
    
    // Application processing here
    cout << "Elapsed time in seconds assigned here: " << endl;
    cin >> time;
    hour = time / 3600;
    min = time % 3600 / 60; // the modulus operator (%) computes the remainder that results from
    
    // performing integer divison;
    sec = time % 60;
    
    // Show elapsed time in hours, minutes, and seconds
    cout << " Elapsed time is: " << hour << ";" << min << ":" << sec << "." << endl;\
    
    // Show application close
    cout << "\nEnd of my Application" << endl << endl;
    
    // Pause before application window closes
    cout << "Press any key to exit ..." << endl;
    _getch();
