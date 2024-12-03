/*
    Exp. No.7 : TASK-1
    Title: WAP to find the largest element in an array.
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
    printf("Enter %d elements:\n", n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }


  int largest = arr[0];
  for (int i = 1; i < n; i++) {
  if (arr[i] > largest) {
    largest = arr[i];
    }
  }
    printf("The largest element in the array is: %d\n", largest);


  return 0;
}

/*  **OUTPUT**

Enter the number of elements in the array: 2

Enter 2 elements:23 & 45

The largest element in the array is: 45

*/
