#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0, c = 0, n1, n2, d;
    for (n = 1; n <= 100; n++)
    {
        n1 = n;
        n2 = n;
        while (n1!= 0)
        {
            n1 = n1 / 10;
            c++;
        }
        while (n2!= 0)
        {
            d = n2 % 10;
            sum += pow(d, c);
            n2 = n2 / 10;
        }

        if (sum == n)
        {
            printf("%d is an Armstrong number.\n", sum);
        }

        n1 = 0, n2 = 0, sum = 0, c = 0;
    }
    return 0;
}