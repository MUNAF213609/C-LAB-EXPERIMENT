/*
    Exp. No.3
    Title:WAP to design a menu driven calculator using switch and goto
    Name: Shaikh Munaf Sameer
    Class & Div: FE & E
    UIN: 241S047
*/

#include <stdio.h>
int main()
{

    float num1, num2, result;
    int mod_result;
    char operator;

    printf("\t\t *****WELCOME TO THE******\n");
    printf("\t\t ********CALCULATOR**********\n\n");
    printf("Operations:\n");
    printf("Addition (+)\n");
    printf("Subtraction (-)\n");
    printf("Division (/)\n");
    printf("Multiplication (*)\n");
    printf("Modulus (%%)\n\n");

    repeat:

    printf("Enter first Operand:\n");
    scanf("%f", &num1);
    printf("Enter Second Operand:\n");
    scanf("%f", &num2);
    printf("Enter Operation (+, -, *, /, %%):\n");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
      result = num1 + num2;
      printf("%.1f + %.1f = %.1f\n", num1, num2, result);
      break;

    case '-':
      result = num1 - num2;
      printf("%.1f - %.1f = %.1f\n", num1, num2, result);
      break;

    case '*':
      result = num1 * num2;
      printf("%.1f * %.1f = %.1f\n", num1, num2, result);
      break;

    case '/':
      if (num2 == 0)
      {
      printf("Cannot perform division by zero\n");
      }
      else
      {
      result = num1 / num2;
      printf("%.1f / %.1f = %.1f\n", num1, num2, result);
      }
      break;

    case '%':
      if ((int)num2 == 0)
      {
      printf("Cannot perform modulus by zero\n");
      }


    else
      {
      mod_result = (int)num1 % (int)num2;
      printf("%d %% %d = %d\n", (int)num1, (int)num2, mod_result);
      }
      break;

    default:
      printf("Invalid operator. Please try again.\n");
      goto repeat;
    }

    char continuecalc;
      printf("Continue? (Y/N): ");
      scanf(" %c", &continuecalc);
      if (continuecalc == 'Y' || continuecalc == 'y')
      {
      goto repeat;
      }

    else
      {
      printf("Thank You for using Calculator\n");
      }

    return 0;
}

/*    **OUTPUT**

  ********CALCULATOR**********

Operations:
Addition (+)
Subtraction (-)
Division (/)
Multiplication (*)
Modulus (%)

Enter first Operand:
3
Enter Second Operand:
2
Enter Operation (+, -, *, /, %):
*
3.0 * 2.0 = 6.0
Continue? (Y/N): Y
Enter first Operand:
5
Enter Second Operand:
4
Enter Operation (+, -, *, /, %):
-
5.0 - 4.0 = 1.0
Continue? (Y/N): N
Thank You for using Calculator
*/
