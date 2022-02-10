/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,total=0;
  float avg;

//keyboard input for subject 1
  printf("Enter the marks of subject 1:");
  scanf("%d",&mark1);

//keyboard input for subject 2
  printf("Enter the marks of subject 2:");
  scanf("%d",&mark2);

//calculating total marks
  total=mark1+mark2;

  //calculating average mark
  avg=total/2.0;

  printf("Average =%.2f",avg);

  return 0;
}

