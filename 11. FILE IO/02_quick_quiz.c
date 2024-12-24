/* Quick Quiz: Modify the program of --> 01_file.c <-- to check whether the file exists or not before
opening the file. */

#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("check2.txt", "r");
    if (ptr == NULL)
    {
        printf("Sorry! This File Does Not Exists.");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The Value of num is %d\n", num);
        fclose(ptr);
    }
    return 0;
}
