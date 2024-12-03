/*
    EXP No.10 : TASK-1
    Title: WAP to add two numbers using pointers
    Name: Shaikh Munaaf Sameer
    Class & Div: FE & E
    UIN: 241S047

*/

#include<stdio.h>

int main() {
    int num1,num2;


    //Initialization Of Pointers
    int *PTR1=&num1, *PTR2=&num2;

    printf("ENTER 1ST NUMBER : ");
    scanf("%d",PTR1);

    printf("ENTER 2ST NUMBER : ");
    scanf("%d",PTR2);

    //ADDITION
    printf("ADDITION IS %d\n\n",*PTR1 + *PTR2);


    return 0;
}

/* *OUTPUT*

ENTER 1ST NUMBER : 69

ENTER 2ST NUMBER : 59

ADDITION IS 128

*/
