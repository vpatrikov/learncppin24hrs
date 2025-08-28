#include <iostream>

int main()
{
    short grade;

    std::cout << "\nEnter your grade: ";
    std::cin >> grade;
    
    switch (grade)
    {
    case 2:
        std::cout << "too bad.\n";
        break;
    case 3:
        std::cout << "you can do better.\n";
        break;
    case 4:
        std::cout << "mid.\n";
        break;
    case 5:
        std::cout << "good job\n";
        break;
    case 6:
        std::cout << "excelent\n";
        break;
    default:
        std::cout << "Invalid grade: must be between 2-6\n";
        break;
    }

    return 0;
}