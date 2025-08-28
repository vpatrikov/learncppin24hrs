#include <iostream>

int main()
{
    enum Direction {North, East, Southeast, South, Southwest, 
        West, Northwest};

        Direction heading;
        heading = Southwest;

        std::cout << "Heading " << heading << "\n";
        return 0;
}