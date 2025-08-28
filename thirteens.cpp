/*

This program returns all the numbers up to 500 that are dividable by 13

*/
#include <iostream>


int main ()
{
    short number = 1;

    while (number < 500)
    {
        if (number % 13 == 0)
        {
            std::cout << number << " ";
        }

        number++;
    }
    

}