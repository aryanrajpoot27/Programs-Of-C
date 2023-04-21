#include<stdio.h>
int main()
{
    float n,i,sum=0;
    printf("enter the number");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        printf(" %f ",1/(i*i));
        sum=sum+1/(i*i);

    }
    printf("\n %.2f \n",sum);
    return 0;
}
