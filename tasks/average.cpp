/*
    This is a short program that calculates the average of two numbers
    via choosing/overloading one of the three vairants of average function
    based on the parameters passed to it. I've also created my own input
    function in order to perform checks on whether a valid number is entered
    and keep main nice and tidy.
*/
#include <iostream>
#include <stdexcept>

int average(int, int);
long average(long, long);
float average(float, float);

template <typename T>
T getInput();

int main()
{
    float a, b;

    std::cout << "Enter a: ";
    a = getInput<float>();
    std::cout << "Enter b: ";
    b = getInput<float>();
    
    std::cout << "The average of the two numbers is " << average(a, b) << '\n';

    return 0;
}

// ! creating a generic/template type paramether so it can work for any data type entered
template <typename T> 
T getInput()
{
    T value;
    while (true)
    {
        try
        {
            std::cin >> value;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                throw std::invalid_argument("Invalid number entered.");
            }

            return value;
        }

        catch (const std::invalid_argument &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}

float average(float a, float b)
{
    return (a + b) / 2;
}

// TODO: implement the rest of the vairants for the 'average' function