/**
 * Program Name: cis6Fall2013JoshuaPenaLab2Ex1.c
 * Discussion:   Lab 2
 * Author:       Joshua Pena
 * Date:         2013/10/17
 */

#include <stdio.h>

// Function Prototypes

double addJoshuaP(double, double);
double subtractJoshuaP(double, double);
double multiplyJoshuaP(double, double);
int divideJoshuaP(int, int);
void displayClassInfoJoshuaP(void);
void displayMenu(void);

int main() {

  int option;
  double data1;
  double data2;
  int data3;
  int data4;

  displayClassInfoJoshuaP();

  displayMenu();

  printf("\nSelect and enter an integer for option + ENTER: ");
  scanf("%d", &option);

  if (option == 1) {
    printf("\nEnter first operand: ");
    scanf("%lf", &data1);

    printf("\nEnter second operand: ");
    scanf("%lf", &data2);
  
    printf("\n%f + %f --> %f\n", data1, data2, 
      addJoshuaP(data1, data2));
  }

  if (option == 2) {
    printf("\nEnter first operand: ");
    scanf("%lf", &data1);

    printf("\nEnter second operand: ");
    scanf("%lf", &data2);
  
    printf("\n%f - %f --> %f\n", data1, data2, 
      subtractJoshuaP(data1, data2));
  }

  if (option == 3) {
    printf("\nEnter first operand: ");
    scanf("%lf", &data1);

    printf("\nEnter second operand: ");
    scanf("%lf", &data2);
  
    printf("\n%f * %f --> %f\n", data1, data2, 
      multiplyJoshuaP(data1, data2));
  }

  if (option == 4) {
    printf("\nEnter first operand: ");
    scanf("%d", &data3);

    printf("\nEnter second operand: ");
    scanf("%d", &data4);
  
    printf("\n%d / %d --> %d\n", data3, data4, 
      divideJoshuaP(data3, data4));
  }
    
  return 0;
}

// Function Definitions

void displayMenu() {
  printf("\nMENU:\n"\
         "      (1) Add\n"\
         "      (2) Subtract\n"\
         "      (3) Multiply\n"\
         "      (4) Divide\n");

  return;
}

void displayClassInfoJoshuaP() {

  printf("CIS 6 - Introduction to C Programming\n"\
         "Laney College\n"\
         "Joshua Pena\n\n"\
         "Assignment Information --\n"\
         "  Assignment Number:  Lab 02,\n"\
         "                      Coding Assignment -- Exercise #1\n"\
         "  Written by:         Joshua Pena\n"\
         "  Subbmitted Date:    2013/10/17\n");

  return;
}

double addJoshuaP(double arg1, double arg2) {
  double temp;

  temp = arg1 + arg2;

  return temp;
}

double subtractJoshuaP(double arg1, double arg2) {
  double temp;

  temp = arg1 - arg2;

  return temp;
}

double multiplyJoshuaP(double arg1, double arg2) {
  double temp;

  temp = arg1 * arg2;

  return temp;
}


int divideJoshuaP(int arg1, int arg2) {
  int temp;

  temp = arg1 / arg2;

  return temp;
}

/*OUTPUT From Run #1
CIS 6 - Introduction to C Programming
Laney College
Joshua Pena

Assignment Information --
  Assignment Number:  Lab 02,
                      Coding Assignment -- Exercise #1
  Written by:         Joshua Pena
  Subbmitted Date:    2013/10/17

MENU:
      (1) Add
      (2) Subtract
      (3) Multiply
      (4) Divide

Select and enter an integer for option + ENTER: 1

Enter first operand: 4

Enter second operand: 5

4.000000 + 5.000000 --> 9.000000
*/
/*OUTPUT From Run #2
CIS 6 - Introduction to C Programming
Laney College
Joshua Pena

Assignment Information --
  Assignment Number:  Lab 02,
                      Coding Assignment -- Exercise #1
  Written by:         Joshua Pena
  Subbmitted Date:    2013/10/17

MENU:
      (1) Add
      (2) Subtract
      (3) Multiply
      (4) Divide

Select and enter an integer for option + ENTER: 2

Enter first operand: 4

Enter second operand: 5

4.000000 - 5.000000 --> -1.000000
*/
/*OUTPUT From Run #3
CIS 6 - Introduction to C Programming
Laney College
Joshua Pena

Assignment Information --
  Assignment Number:  Lab 02,
                      Coding Assignment -- Exercise #1
  Written by:         Joshua Pena
  Subbmitted Date:    2013/10/17

MENU:
      (1) Add
      (2) Subtract
      (3) Multiply
      (4) Divide

Select and enter an integer for option + ENTER: 3

Enter first operand: 4

Enter second operand: 5

4.000000 * 5.000000 --> 20.000000
*/
/*OUTPUT From Run #4
CIS 6 - Introduction to C Programming
Laney College
Joshua Pena

Assignment Information --
  Assignment Number:  Lab 02,
                      Coding Assignment -- Exercise #1
  Written by:         Joshua Pena
  Subbmitted Date:    2013/10/17

MENU:
      (1) Add
      (2) Subtract
      (3) Multiply
      (4) Divide

Select and enter an integer for option + ENTER: 4

Enter first operand: 8

Enter second operand: 5

8 / 5 --> 1
*/