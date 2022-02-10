/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

int i,n,sum=0;

//keyboard input for a number
printf("Enter the number:");
scanf("%d",&n);

//calculating the sum of n numbers
for(i=1;i<=n;i++)
{
  sum += i;
}

 printf("Sum = %d", sum);
return 0;
}

