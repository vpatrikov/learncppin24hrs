#include <iostream>

int main()
{
    // in C++, an array's elements are always written consecutively in the PC's memory
    // a multidimensional  array with 5 rows and 3 colums
    int box[5][3] = {
        {8, 6, 7},
        {5, 3, 0},
        {9, 2, 1},
        {7, 8, 9},
        {0, 5, 2}};

    // two for loops used to print each element of the 2D array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "box[" << i << ']';
            std::cout << "[" << j << "] = ";
            std::cout << box[i][j] << std::endl;
        }
    }
}