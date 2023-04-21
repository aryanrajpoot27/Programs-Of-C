#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i*i);
        sum=sum+i*i;
        
    }
    printf("\n%d\n",sum);
    printf("ghsg");

    return 0;
}