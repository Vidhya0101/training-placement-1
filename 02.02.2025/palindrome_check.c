#include<stdio.h>
int main() {
int n, reverse = 0, remainder, number;
printf("Enter the integer:\n");
scanf("%d", &n);
number = n;
while (n!=0) {
remainder = n % 10;
reverse = reverse * 10 + remainder;
n/=10;
}
if (number == reverse) {
printf("\n%d is a palindrome\n", number);
} else {
printf("\n%d is not a palindrome\n", number);
}
return 0;
}

