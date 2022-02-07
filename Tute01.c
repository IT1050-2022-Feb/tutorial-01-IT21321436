/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float Mark1,Mark2,avg;; 

  printf("Enter Subject 1 marks : ");
  scanf("%f",&Mark1);
  printf("Enter Subject 2 marks : ");
  scanf("%f",&Mark2);

  //calculation part
  avg = (Mark1+Mark2)/2.0;

  printf("Average of two marks : %.2f",avg); 

  return 0;
}

