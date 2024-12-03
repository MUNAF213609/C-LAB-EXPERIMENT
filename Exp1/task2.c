/*
    Expt. No : 1 (task 2)
    Title : WAP to get students PCM marks from the user and find the average. Use conditional
    operator to print if the student is eligible for admission. Eligibility criteria is 50% in
    PCM.

    Name: Shaikh Munaf Sameer
    Class & Div: ECS-E
    UIN: 241S047
 */



 #include <stdio.h>
int main() {
    int phy, chem, maths;
    float avg;
    printf("+++ Student Eligibility Calculator +++\n");
    printf("Enter physics marks: ");
    scanf("%d", &phy);
    printf("Enter chemistry marks: ");
    scanf("%d", &chem);
    printf("Enter maths marks: ");
    scanf("%d", &maths);
    avg = (phy + chem + maths) / 3.0;
    printf("PCM Average = %.2f\n", avg);
    if (avg > 50) {
        printf("You are eligible for admission.\n");
    } else {
        printf("You are not eligible for admission.\n");
    }
    return 0;
}


/*OUTPUT

+++ Student Eligibility Calculator +++
Enter physics marks: 70
Enter chemistry marks: 78
Enter maths marks: 90
PCM Average = 79.33
You are eligible for admission.


*/
