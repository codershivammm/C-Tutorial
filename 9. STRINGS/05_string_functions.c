#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Shivam";
    char s1[56] = "Shivam";
    char s2[56] = " Jaiswal";
    printf("%d\n", strlen(st));

    char target[30];
    strcpy(target, st); // target now contains "Shivam"
    printf("%s %s\n", st, target);

    strcat(s1, s2); // s1 now contains "Shivam Jaiswal"
    printf("%s\n", s1);

    int a = strcmp("deep", "joke"); // DJ is negative
    printf("%d", a);

    return 0;
}