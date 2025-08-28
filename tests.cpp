#include <iostream>

int main()
{

    // create a type definition
    typedef unsigned short USHORT;
    
    // create two variables that will hold only positive values for width and length
    USHORT width, length;
    
    // initialize the two variables
    width = 26;
    length = 4;
    
    // create and initialize a variable for the calculation of the area
    USHORT area = width * length;

    std::cout << "Area: " << area << "\n"; // print result of area variable on screen

    return 0;
}