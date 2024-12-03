
/*
    Exp. No.6
    Title: WAP to define a counter function to print how many times the function is called use storage classes.
    Name: Shaikh Munaf Sameer
    Class & Div: FE & E
    UIN: 241S047
*/

#include<stdio.h>

  extern int countExtern;


  void counterFunctionStatic() {
    static int countStatic = 0;
    countStatic++;
    printf("Static: Function called %d times\n", countStatic);
    }


  void counterFunctionAuto() {
    auto int countAuto = 0;
    countAuto++;
    printf("Auto: Function called %d times\n", countAuto);
    }


  void counterFunctionRegister() {
    register int countRegister = 0;
    countRegister++;
    printf("Register: Function called %d times\n", countRegister);
    }


  void counterFunctionExtern() {
    extern int countExtern;
    countExtern++;
    printf("Extern: Function called %d times\n", countExtern);
    }

  int countExtern = 0;

  int main() {


    counterFunctionStatic();
    counterFunctionStatic();
    counterFunctionStatic();

    counterFunctionAuto();
    counterFunctionAuto();

    counterFunctionRegister();
    counterFunctionRegister();
    counterFunctionExtern();
    counterFunctionExtern();
    counterFunctionExtern();


  return 0;
}

/*  **OUTPUT**

Static: Function called 1 times
Static: Function called 2 times
Static: Function called 3 times
Auto: Function called 1 times
Auto: Function called 1 times
Register: Function called 1 times
Register: Function called 1 times
Extern: Function called 1 times
Extern: Function called 2 times
Extern: Function called 3 times

*/
