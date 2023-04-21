#include <stdio.h>
int main(){
 int arr[50], n, i,j, current;
 printf("Please Enter the Number of Elements you want in the array: ");
 scanf("%d", &n);
 printf("Please Enter the Value of Elements: ");
 for(i = 0; i < n; i++)
 scanf("%d\t", &arr[i]);
for ( i = 1; i < n; i++)
{
 current = arr[i];
 j = i-1;
 while (arr[j]>current && j>=0)
 {
    arr[j+1] = arr[j];
    j--;
 }
 arr[j+1]=current;

}
for ( i = 0; i < n; i++)
{
    printf("%d \t", arr[i]);
}

return 0;
}