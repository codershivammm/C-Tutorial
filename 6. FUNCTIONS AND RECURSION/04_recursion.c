#include <stdio.h>

int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return factorial(a - 1) * a;
    }
}

int main()
{
    int fact = factorial(3);
    printf("The Factorial is %d", fact);
    return 0;
}