/**
 * Program Name: cis6Fall2013JoshuaPenaLab5Ex1.c
 * Discussion:   Lab 5
 * Author:       Joshua Pena
 * Date:         2013/12/12
 */
#include <stdio.h>

// Function Prototypes

void displayClassInfoJoshuaPena(void);
void extractLargestDigitJoshuaPena(int, int[], int);
void displayDigitOccurrenceJoshuaPena(int[], int, int[], int);

int main() {
  int option;
  int data1;
  int data2;
  int ary1[2] = {0};
  int ary2[10] = {0};
  int size1 = 2;
  int size2 = 10;

  displayClassInfoJoshuaPena();

  do {
    printf("**************************************************\n"\
           "*                        MENU                    *\n"\
           "* (1) Calling extractLargestDigitJoshuaPena()    *\n"\
           "* (2) Calling displayDigitOccurrenceJoshuaPena() *\n"\
           "* (3) Quit                                       *\n"\
           "**************************************************\n");

    printf("\nEnter your option (1, 2, or 3): ");
    scanf("%d", &option);

    switch (option) {
      case 1:
        printf("\n  Calling extractLargestDigitJoshuaPena() --\n"\
          "    Enter an integer: ");
        scanf("%d", &data1);
        extractLargestDigitJoshuaPena(data1, ary1, size1);
        break;
      case 2:
        printf("\n  Calling displayDigitOccurrenceJoshuaPena() --"\
               "\n    Enter 2 integers --\n"\
               "      First integer : ");
        scanf("%d", &ary1[0]);
        printf("      Second integer : ");
        scanf("%d", &ary1[1]);
        printf("    Occurrence of digits --\n");
        displayDigitOccurrenceJoshuaPena(ary1, size1, ary2, size2);
        break;
      case 3:
        printf("\n  Have fun ...\n");
        break;
      default:
        printf("\n    WRONG OPTION!\n\n\n");
    }

  } while (option != 3);

  return 0;
}

// Function Definition

void displayDigitOccurrenceJoshuaPena(int ary1[], int size1, 
                                      int ary2[], int size2) {
  int i;
  int j;
  int digit;
  int total = 0;

  for (i = 0; i < size1; i++) {
    ary1[i] = ary1[i] < 0 ? -ary1[i] : ary1[i];
  }

  for (i = 0; i < size1; i++) {
    while (ary1[i] != 0) {
      ary2[ary1[i] % 10]++;
      ary1[i] /= 10;
    }
  }

  for (j = 0; j < size2; j++) {
    printf("      Digit %d : %d\n", j, ary2[j]);
  }

  for (j = 0; j < size2; j++) {
    total += ary2[j];
  }

  printf("\n  Total number of occurrence(s) for all digit(s) : %d\n\n\n",
    total);

  return;
}

void extractLargestDigitJoshuaPena(int data, int ary[], int size) {
  int digit = 0;
  int pos = 1;

  data = data < 0 ? -data : data;

  while (data != 0) {
    digit = data % 10;
    if (digit > ary[0]) {
      ary[0] = digit;
      ary[1] = pos;
    }
    pos++;
    data /= 10;
  }

  printf("    The largest digit : %d\n", ary[0]);
  printf("    Its position : %d\n\n\n", ary[1]);

  return;
}

void displayClassInfoJoshuaPena() {
  printf("CIS 6 - Introduction to Programming (C)\n"\
         "Laney College\n"\
         "Joshua Pena\n\n"\
         "Assignment Information --\n"\
         "  Assignment Number:  Lab 05,\n"\
         "                      Coding Assignment -- Exercise #1\n"\
         "  Written by:         Joshua Pena\n"\
         "  Subbmitted Date:    2013/12/12\n\n\n");

  return;
}
/* OUTPUT
CIS 6 - Introduction to Programming (C)
Laney College
Joshua Pena

Assignment Information --
  Assignment Number:  Lab 05,
                      Coding Assignment -- Exercise #1
  Written by:         Joshua Pena
  Subbmitted Date:    2013/12/12


**************************************************
*                        MENU                    *
* (1) Calling extractLargestDigitJoshuaPena()    *
* (2) Calling displayDigitOccurrenceJoshuaPena() *
* (3) Quit                                       *
**************************************************

Enter your option (1, 2, or 3): 4

    WRONG OPTION!


**************************************************
*                        MENU                    *
* (1) Calling extractLargestDigitJoshuaPena()    *
* (2) Calling displayDigitOccurrenceJoshuaPena() *
* (3) Quit                                       *
**************************************************

Enter your option (1, 2, or 3): 1

  Calling extractLargestDigitJoshuaPena() --
    Enter an integer: 3287401
    The largest digit : 8
    Its position : 5


**************************************************
*                        MENU                    *
* (1) Calling extractLargestDigitJoshuaPena()    *
* (2) Calling displayDigitOccurrenceJoshuaPena() *
* (3) Quit                                       *
**************************************************

Enter your option (1, 2, or 3): -1

    WRONG OPTION!


**************************************************
*                        MENU                    *
* (1) Calling extractLargestDigitJoshuaPena()    *
* (2) Calling displayDigitOccurrenceJoshuaPena() *
* (3) Quit                                       *
**************************************************

Enter your option (1, 2, or 3): 2

  Calling displayDigitOccurrenceJoshuaPena() --
    Enter 2 integers --
      First integer : 3287401
      Second integer : 15289
    Occurrence of digits --
      Digit 0 : 1
      Digit 1 : 2
      Digit 2 : 2
      Digit 3 : 1
      Digit 4 : 1
      Digit 5 : 1
      Digit 6 : 0
      Digit 7 : 1
      Digit 8 : 2
      Digit 9 : 1

  Total number of occurrence(s) for all digit(s) : 12


**************************************************
*                        MENU                    *
* (1) Calling extractLargestDigitJoshuaPena()    *
* (2) Calling displayDigitOccurrenceJoshuaPena() *
* (3) Quit                                       *
**************************************************

Enter your option (1, 2, or 3): 3

  Have fun ...
*/
