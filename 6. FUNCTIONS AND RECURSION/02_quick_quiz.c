/* Quick Quiz: Write a program with three functions
1. Good morning function which prints “good morning”.
2. Good afternoon function which prints “good afternoon”.
3. Good night function which prints “good night”. */

#include <stdio.h>

//Function Prototype
void good_morning();
void good_afternoon();
void good_evening();

//Function Definition
void good_morning(){
    printf("good morning\n");
}

void good_afternoon(){
    printf("good afternoon\n");
}

void good_evening(){
    printf("good evening\n");
}

int main(){
    good_morning();   //Function Call
    good_afternoon(); //Function Call
    good_evening();   //Function Call
    return 0;
}