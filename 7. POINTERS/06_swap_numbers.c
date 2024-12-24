#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{

    int a = 4;
    int b = 3;
    swap(&a, &b);
    printf("The Value of a is %d and b is %d", a, b);
    return 0;
}