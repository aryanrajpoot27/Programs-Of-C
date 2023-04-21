#include<stdio.h>
#include<math.h>
int main()
{
    float n,sum=0,i;
    printf("enter the number");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        printf(" %.2f ",1/i);
        sum=sum+pow(-1,i)*1/i;
    }
        printf("\n %f \n" ,sum);
        return 0;


    
}
