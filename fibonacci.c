#include <stdio.h>
int main() {
int n,a=0,b=1,i,c;
printf("Enter the no. of terms");
scanf("%d",&n);
printf("%d \t %d \t",a,b);
for ( i = 2; i < n; i++)
{
  c= a+b;
  printf("%d\t",c);
  a=b;
  b=c;
}


  return 0;
}