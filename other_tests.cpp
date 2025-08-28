#include <iostream>

void swap(int, int);

int main()
{
    int a = 10, b = 6;
    printf("a = %d, b = %d\n", a, b);
    
    // ! this does not work because it sends copies of the original variables to the function
    // ? it cam be fixed by using references (&) ib front of each parameter
    swap (a, b);
    
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}