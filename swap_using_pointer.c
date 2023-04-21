#include <stdio.h>
int main()
{
 int num1, num2, temp;
 int *p = &num1, *q = &num2;
 printf("Enter the values of two variables to be swapped ");
 scanf("%d %d", p, q);
 temp = *p;
 *p = *q;
 *q = temp;
 printf("Swapped values of two variables are %d %d", *p,*q);
 return 0;
}
