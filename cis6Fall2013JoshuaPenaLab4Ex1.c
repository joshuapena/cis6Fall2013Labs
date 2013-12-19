/**
 * Program Name: cis6Fall2013JoshuaPenaLab4Ex1.c
 * Discussion:   Lab 4
 * Author:       Joshua Pena
 * Date:         2013/12/03
 */
#include <stdio.h>

// Function Prototypes

void displayClassInfoJoshuaP(void);
double modifyIntegralPartUpdateJoshuaPena(double, int, int);

int main() {
  int option;
  double data;
  int pos1;
  int pos2;

  displayClassInfoJoshuaP();

  do {
    printf("******************************************************\n"\
           "*                        MENU                        *\n"\
           "* (1) Calling modifiedIntegralPartUpdateJoshuaPena() *\n"\
           "* (2) Quit                                           *\n"\
           "******************************************************\n");

    printf("\nEnter your option (1 or 2): ");
    scanf("%d", &option);

    switch (option) {
      case 1:
        printf("\n  Calling modifyIntegralPartUpdateJoshuaPena() --\n"\
          "    Enter a floating-point: ");
        scanf("%lf", &data);
        printf("    Enter the first digit position: ");
        scanf("%d", &pos1);
        printf("    Enter the second digit position: ");
        scanf("%d", &pos2);
        printf("\n    Modified value : %f\n\n\n", 
          modifyIntegralPartUpdateJoshuaPena(data, pos1, pos2));
        break;
      case 2:
        printf("\n\n  Feeling Good!\n");
        break;
      default:
        printf("\n  WRONG OPTION!\n\n\n");
    }

  } while (option != 2);

  return 0;
}

// Function Definitions

void displayClassInfoJoshuaP() {

  printf("CIS 6 - Introduction to Programming (C)\n"\
         "Laney College\n"\
         "Joshua Pena\n\n"\
         "Assignment Information --\n"\
         "  Assignment Number:  Lab 04,\n"\
         "                      Coding Assignment -- Exercise #1\n"\
         "  Written by:         Joshua Pena\n"\
         "  Subbmitted Date:    2013/12/03\n\n\n");

  return;
}

double modifyIntegralPartUpdateJoshuaPena(double data, int pos1, int pos2) {
  double decimal;
  int num;
  int dig1 = 1;
  int dig2 = 1;
  int largeDig;
  int smallDig;

  decimal = data - (int)data;
  num = (int)data;

  while (pos1 > 1) {
    dig1 *= 10;
    pos1--;
  }

  while (pos2 > 1) {
    dig2 *= 10;
    pos2--;
  }

  if ((num / dig1 % 10) > (num / dig2 % 10)) {
    largeDig = num / dig1 % 10;
    smallDig = num / dig2 % 10;

    num = num < 0 ? num - dig1 * (largeDig - smallDig) : 
      num + dig2 * (largeDig - smallDig);
  } else {
    largeDig = num / dig2 % 10;
    smallDig = num / dig1 % 10;

    num = num < 0 ? num - dig2 * (largeDig - smallDig) : 
      num + dig1 * (largeDig - smallDig); 
  }

  return (double)num + decimal;
}

/* OUTPUT
CIS 6 - Introduction to Programming (C)
Laney College
Joshua Pena

Assignment Information --
  Assignment Number:  Lab 04,
                      Coding Assignment -- Exercise #1
  Written by:         Joshua Pena
  Subbmitted Date:    2013/12/03


******************************************************
*                        MENU                        *
* (1) Calling modifiedIntegralPartUpdateJoshuaPena() *
* (2) Quit                                           *
******************************************************

Enter your option (1 or 2): 3

  WRONG OPTION!


******************************************************
*                        MENU                        *
* (1) Calling modifiedIntegralPartUpdateJoshuaPena() *
* (2) Quit                                           *
******************************************************

Enter your option (1 or 2): 1

  Calling modifyIntegralPartUpdateJoshuaPena() --
    Enter a floating-point: 1234.5678
    Enter the first digit position: 2
    Enter the second digit position: 3

    Modified value : 1334.567800


******************************************************
*                        MENU                        *
* (1) Calling modifiedIntegralPartUpdateJoshuaPena() *
* (2) Quit                                           *
******************************************************

Enter your option (1 or 2): 1

  Calling modifyIntegralPartUpdateJoshuaPena() --
    Enter a floating-point: -56789.1234
    Enter the first digit position: 4
    Enter the second digit position: 1

    Modified value : -59789.123400


******************************************************
*                        MENU                        *
* (1) Calling modifiedIntegralPartUpdateJoshuaPena() *
* (2) Quit                                           *
******************************************************

Enter your option (1 or 2): -1

  WRONG OPTION!


******************************************************
*                        MENU                        *
* (1) Calling modifiedIntegralPartUpdateJoshuaPena() *
* (2) Quit                                           *
******************************************************

Enter your option (1 or 2): 2


  Feeling Good!
*/