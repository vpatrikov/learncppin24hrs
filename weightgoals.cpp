/*
    An example from the C++ textbook's chapter about arrays.
    The only change I've made here is in the for loop 
    where I used sizeof(array) / sizeof(array[0]) in order to find the amount
    of elements in the structure.
*/

#include <iostream>

int main()
{
    float goal[4];
    goal[0] = 0.9;
    goal[1] = 0.75;
    goal[2] = 0.5;
    goal[3] = 0.25;

    float weight, target;

    std::cout << "Enter current weight: ";
    std:: cin >> weight;
    std::cout << "Enter goal weight: ";
    std::cin >> target;

    for (int i = 0; i < sizeof(goal) / sizeof(goal[0]); i++)
    {   
        float loss = (weight - target) * goal[i];
        std::cout << "Goal " << (i + 1) << ": " << target + loss << std::endl;
    }
    

    return 0;

}