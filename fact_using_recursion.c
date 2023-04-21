#include <stdio.h>
int factorial(int);
int main() {
 int i;
 printf("Enter Value of i =\t");
 scanf("%d",&i);
 printf("Factorial of %d is %d\n", i, factorial(i));
 return 0;
}
int factorial(int i) {
 if(i <= 1) {
 return 1;
 }
 else{
 return i * factorial(i - 1);
 }
}
