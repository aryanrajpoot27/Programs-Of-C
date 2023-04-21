#include<stdio.h>
#include<math.h>
int main()
{
    float j,i,n,sum=0,fact=1;
    printf("enter the number");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        fact=fact*j;

        
    
    sum=sum+1/fact;
}
    printf("\n %.2f \n",sum);
    return 0;
}