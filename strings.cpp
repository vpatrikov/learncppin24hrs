#include <iostream>
#include <string.h>
#include <stdexcept>

int main()
{
    char string_1 [] = "I don't know what to write";
    char string_2[sizeof(string_1)];
    
    std::cout << "String 1: " << string_1 << std::endl;
    
    // copies the value from one string to another
    // ! strcpy(destination, source)
    strcpy(string_2, string_1);
    
    std::cout << "String 2: " << string_2 << std::endl;

    return 0;
}