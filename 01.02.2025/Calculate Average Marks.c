#include<stdio.h>
int main() {
int mark1, mark2, mark3;
printf("Enter the marks for three subjects:\n"};
scanf("%d %d %d", &mark1, &mark2, &mark3);
if (mark1<0 || mark2<0 || mark3<0) {
  printf("Invalid input! Please try again with positive numbers..\n");
  return 1;
  }
  float average = (mark1 + mark2 + mark3) /3.00;
  printf("Average Marks is: %.2f\n", average);
return 0;
}
