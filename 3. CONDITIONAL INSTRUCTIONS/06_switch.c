#include <stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("You entered 1\n");
            break;
        case 2:
            printf("You entered 2\n");
            break;
        case 3:
            printf("You entered 3\n");
            break;
        case 4:
            printf("You entered 4\n");
            break;
        default:
            printf("Nothing matched");
    }
    return 0;
}
//In switch case if any case is true then the cases another true case will also get executed and if Nothing True Default case will Get Executed 
//To Avoid This We Use Break statement so that if condition met true that case will execute and code get terminated
