// Write a program to modify a file containing an integer to double its value.

#include <stdio.h>

int main()
{
    int num;
    FILE *ptr;
    ptr = fopen("num.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);

    fopen("num.txt", "a");
    fprintf(ptr, " ---> %d ", 2 * num);
    fclose(ptr);
    return 0;
}