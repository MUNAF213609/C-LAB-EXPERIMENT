/*
    EXP No.10 : TASK-2
    Title: WAP to print the elements of an array in reverse order using pointers
    Name: Shaikh Munaaf Sameer
    Class & Div: FE & E
    UIN: 241S047

*/


#include <stdio.h>

  int main() {
    int n;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);


    int arr[n];
    int *ptr = arr;


    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
     scanf("%d", ptr + i);
    }


    printf("Array elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
     printf("%d ", *(ptr + i));
    }

    printf("\n");


    return 0;
}

/*  **OUTPUT**

Enter the number of elements in the array: 4

Enter 4 elements: 3 5 7 9

Array elements in reverse order: 9 7 5 3

*/
