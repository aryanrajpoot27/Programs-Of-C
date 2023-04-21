#include<stdio.h>
#include<math.h>
int main()
{
    float n,x,i,sum=0,j,fact=1;
    printf("enter the number");
    scanf("%f",&n);
    printf ("enter value");
    scanf("%f",&x);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }

    
    sum=sum+pow(-1,(i+1))*(x/(i*fact));
}
printf("%f",sum);
return 0;
}