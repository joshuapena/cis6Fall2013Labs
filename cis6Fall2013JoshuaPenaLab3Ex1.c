/**
 * Program Name: cis6Fall2013JoshuaPenaLab3Ex1.c
 * Discussion:   Lab 2
 * Author:       Joshua Pena
 * Date:         2013/10/31
 */

#include <stdio.h>

// Function Prototypes

void displayClassInfoJoshuaP(void);
double modifyIntegralPartJoshuaP();
double extractDecimal(double);
int extractInteger(double);
int extract1Digit(int);
int extract10Digit(int);
int extract100Digit(int);
int extractOtherDigits(int);
int compareDigit(int, int);

int main() {
 
  displayClassInfoJoshuaP();

  printf("\n\nTest #1:"\
    "\n\n  Calling modifyIntegralPartJoshuaP() --");

  printf("\n  Printing in main() : modified value : %f", 
    modifyIntegralPartJoshuaP());

  printf("\n\n\nTest #2:"\
    "\n\n  Calling modifyIntegralJoshuaP() --");

  printf("\n  Printing in main() : modified value : %f\n", 
    modifyIntegralPartJoshuaP());

  return 0;
}

// Function Definitions

void displayClassInfoJoshuaP() {

  printf("CIS 6 - Introduction to C Programming (C)\n"\
         "Laney College\n"\
         "Joshua Pena\n\n"\
         "Assignment Information --\n"\
         "  Assignment Number:  Lab 03,\n"\
         "                      Coding Assignment -- Exercise #1\n"\
         "  Written by:         Joshua Pena\n"\
         "  Subbmitted Date:    2013/10/31\n");

  return;
}

double modifyIntegralPartJoshuaP() {

  double test;
  int data;
  int digit1;
  int digit10;
  int digit100;
  int digitOther;
  int smallerDigit;
  double decimal;

  printf("\n    Enter a floating-point : ");
  scanf("%lf", &test);

  data = extractInteger(test);

  digit1 = extract1Digit(data);
  digit10 = extract10Digit(data);
  digit100 = extract100Digit(data);
  digitOther = extractOtherDigits(data);
  smallerDigit = compareDigit(digit1, digit100);
  decimal = extractDecimal(test);

  return (double)digitOther + (double)smallerDigit * 100 + (double)digit10 + (double)smallerDigit + decimal;
}

double extractDecimal(double arg) {
  return arg - (int) arg;
}

int extractInteger(double arg) {
  return (int)arg;
}

int extractOtherDigits(int arg) {
  return arg / 1000 * 1000;
}

int extract1Digit(int arg) {
  return arg / 1 % 10;
}

int extract10Digit(int arg) {
  return arg / 10 % 10 * 10;
}

int extract100Digit(int arg) {
  return arg / 100 % 10;
}

int compareDigit(int arg1, int arg2) {
  int digit;

  if (arg1 > 0) {
    digit = (arg1 > arg2) ? arg2 : arg1;
  } else if (arg1 < 0) {
    digit = (arg1 < arg2) ? arg2 : arg1;
  }

  return digit;
}

/* OUTPUT
CIS 6 - Introduction to C Programming (C)
Laney College
Joshua Pena

Assignment Information --
  Assignment Number:  Lab 03,
                      Coding Assignment -- Exercise #1
  Written by:         Joshua Pena
  Subbmitted Date:    2013/10/31


Test #1:

  Calling modifyIntegralPartJoshuaP() --
    Enter a floating-point : 1234.5678

  Printing in main() : modified value : 1232.567800


Test #2:

  Calling modifyIntegralJoshuaP() --
    Enter a floating-point : -98765.1234

  Printing in main() : modified value : -98565.123400
*/