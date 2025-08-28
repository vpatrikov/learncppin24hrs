/*
    A program that draws a box based on the number of rows, columns
    and the symbol that the user chooses. I've added extra checks for the
    input of the character also used string instead of char in order to further
    check if the user has entered only one symbol or not
*/

#include <iostream>
#include <stdexcept>

typedef std::string string; // typedef for easier writing and readibility

int main()
{
    short rows, columns;
    string symbol;

    std::cout << "How many rows: ";
    std::cin >> rows;
    std::cout << "How many columns: ";
    std::cin >> columns;

    std::cout << "With what symbol: ";

    try
    {
        getchar();
        std::getline(std::cin, symbol);

        // pretty sure this is redundant here, but leaving it just in case
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');

            throw std::invalid_argument("Invalid Input: enter a single character.");
        }

        // checking whether the user submited an empty line 
        if (symbol.empty())
        {
            throw std::invalid_argument("Invalid input: cannot be empty.");
        }

        // checking whether the user has entered more than a single character
        if (symbol.size() > 1)
        {
            throw std::invalid_argument("Ivalid input: must be a single character.");
        }
    }

    catch (const std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << '\n';



    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << symbol;
        }
        
        std::cout << '\n';
    }
    
}