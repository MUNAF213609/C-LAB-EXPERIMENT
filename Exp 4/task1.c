/*
    Exp. No.4
    Title: WAP to find all the prime numbers between two numbers.
    Name: Shaikh Munaf Sameer
    Class & Div: FE & E
    UIN: 241S047
*/

#include <stdio.h>

  int isPrime(int num){
    if (num < 2){
    return 0;
    }


  for (int i = 2; i * i <= num; i++){
   if (num % i == 0)
   {
   return 0;
   }
   }
   return 1;
  }

  void findPrimes(int start, int end){

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++)
  {
    if (isPrime(i))
    {
    printf("%d ", i);
    }
  }
    printf("\n");
  }


  int main(){

    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    findPrimes(start, end);

  return 0;
}

/*  **OUTPUT**

Enter the starting number: 6

Enter the ending number: 8

Prime numbers between 6 and 8 are: 7

*/
