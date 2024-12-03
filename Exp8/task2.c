
/*
    Exp. No.8 : TASK-2
    Title: WAP to check if the entered string is palindrome or not.
    Name: Shaikh Munaaf Sameer
    Class & Div: FE & E
    UIN: 241S047
*/

#include <stdio.h>
#include <string.h>

 int main() {
  char str[100];
  int length, isPalindrome = 1;
  printf("Enter a string: ");
  scanf("%s", str);
  length = 0;

 while (str[length] != '\0') {
  length++;
  }

 for (int i = 0; i < length / 2; i++) {
  if (str[i] != str[length - i - 1]) {
  isPalindrome = 0;
  break;
  }
 }

 if (isPalindrome) {
  printf("The string is a palindrome.\n");
  } else {
  printf("The string is not a palindrome.\n");
  }

 return 0;
}

/* **OUTPUT-1**

Enter a string: LEVEL
The string is a palindrome.

   **OUTPUT-2**
   
Enter a string: CAR
The string is not a palindrome.  

*/
