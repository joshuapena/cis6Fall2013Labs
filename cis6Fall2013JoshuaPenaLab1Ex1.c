/**
 * Program Name: cis6Fall2013JoshuaPenaLab1Ex1.c
 * Discussion:   Exercise 1
 * Author:       Joshua Pena
 * Date:         2013/10/03
 */

#include <stdio.h>

void printTwoLetterNumbers(void);

int main() {

  printTwoLetterNumbers();

  return 0;
}

void printTwoLetterNumbers() {
  int j;
  int p;
  int total;

  j = 25;
  p = 31;
  total = j + p;

  printf("   JJJJ PPPPPP   \n");
  printf("   JJJJ PP   PPP \n");
  printf("     JJ PP    PPP\n");
  printf("     JJ PP   PPP \n");
  printf("JJ   JJ PPPPPP   \n");
  printf("JJ   JJ PP       \n");
  printf(" JJJJJ  PP       \n");
  printf("\nThere are %d J's, and %d P's\n", j, p);
  printf("\nThere are %d characters in total.\n", total);


  return;
}

/* OUTPUT
   JJJJ PPPPPP
   JJJJ PP   PPP
     JJ PP    PPP
     JJ PP   PPP
JJ   JJ PPPPPP
JJ   JJ PP
 JJJJJ  PP

There are 25 J's, and 31 P's

There are 56 characters in total.
*/