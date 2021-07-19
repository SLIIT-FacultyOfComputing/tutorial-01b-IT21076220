/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float sub1 , sub2 , avg;

  printf("Enter marks of subject 1 :");
  scanf("%f" , &sub1);
  printf("Enter marks of subject 2 :"); 
  scanf("%f" , &sub2);
  avg = ( sub1 + sub2 ) / 2;

  printf("Average is %.2f " , avg);
  return 0;
}

