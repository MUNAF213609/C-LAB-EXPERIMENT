/*
    Expt. No : 2 (task 2)
    Title : WAP to find the sum of all the odd numbers between numbers entered by the
            user.

    Name: Shaikh Munaf Sameer
    Class & Div: ECS-E
    UIN: 241S047
 */



 #include <stdio.h>

int main() {
    int start_num, end_num, sum = 0, i;

    printf("\t\t * Sum of Odd Numbers *\n\n");
    printf("Enter Starting Number: ");
    scanf("%d", &start_num);
    printf("Enter Ending Number: ");
    scanf("%d", &end_num);

    if (start_num > end_num) {
        printf("Error: Ending Number should be higher than Starting Number.\n");
        return 1;
    }
    if (start_num % 2 == 0) {
        start_num++;
    }
    for (i = start_num; i <= end_num; i += 2) {
        sum += i;
    }
    printf("Sum of odd numbers from %d to %d is: %d\n", start_num, end_num, sum);
    return 0;
}


/* OUTPUT

      * Sum of Odd Numbers *

Enter Starting Number: 3
Enter Ending Number: 5
Sum of odd numbers from 3 to 5 is: 8

*/
