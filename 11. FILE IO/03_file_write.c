#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("write.txt", "a");  //append mode will write at end whereas write mode clear the file and then write !
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}