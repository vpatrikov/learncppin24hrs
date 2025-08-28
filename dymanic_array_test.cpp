#include <iostream>
#include <string.h>
#include <stdexcept>

typedef std::string string;

template <typename T>
T getInput(string);

int main()
{
    int n;

    while (true)
    {
        try
        {
            n = getInput<int>("Enter the size of your array: ");

            if (n <= 0)
            {
                throw std::out_of_range("Array size cannot be smaller than 1.");
            }

            break;
        }
        catch (const std::out_of_range &e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    int *test = new int[n];

    for (int i = 0; i < n; i++)
    {
        std::cout << "\nEnter element #" << i;
        test[i] = getInput<int>("");
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << "Element " << i << ": " << test[i] << '\n';
    }

    delete[] test;
    
    return 0;
}

template <typename T>
T getInput(string text)
{
    T temp;

    while (true)
    {
        try
        {
            std::cout << text << '\n';
            std::cin >> temp;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                throw std::invalid_argument("Invalid Input. Try again.");
            }

            return temp;
        }
        catch (const std::invalid_argument &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}
