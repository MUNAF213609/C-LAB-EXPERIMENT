/*
    Expt. No : 2 (task 1)
    Title : WAP to find if the entered number is even or odd.

    Name: Shaikh Munaf Sameer
    Class & Div: ECS-E
    UIN: 241S047
 */


 #include <stdio.h>

int main() {
    int num;
    printf("\t\t\t *** Even Odd Finder *** \n\n\n");
    printf("Enter Number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}

/* OUTPUT

  *** Even Odd Finder ***


Enter Number: 23
23 is odd

*/
