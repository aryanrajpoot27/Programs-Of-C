#include<stdio.h>
int main()
{
    float n,sum=0,i;
    printf("enter the number");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        // printf("%f",1/i);
        sum= sum+1/i;
        printf("%.2f + ",1/i);
    }
        printf("\n %f \n",sum);
        return 0;
    
}