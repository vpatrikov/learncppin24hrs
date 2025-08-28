// A simple program that connverts temperature from farenheit to celsius
#include <iostream>

float convert(float); // creating a prototype of the function

int main()
{

    float fahrenheit, celsius;

    std::cout << "Enter the temperature in farenheit: ";
    std::cin >> fahrenheit;

    celsius = convert(fahrenheit);

    // used printf (normally used in C due to the ability to format floating point numbers)
    printf("Here is the temperature converted to celsius: %.2f\n", celsius);

    return 0;
}

float convert(float fahrenheit) // declaring the actual function
{
    return ((fahrenheit - 32) * 5) / 9;
}