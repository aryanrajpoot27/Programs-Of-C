#include <stdio.h>
int main()
{
    int row, n, s, r, ncr;
    printf("Kitni Rows Chahiyee :)");
    scanf("%d", &row);
    for (n = 0; n < row; n++)
    {
        for (s = 1; s < row - n; s++)
        {
            printf(" ");
        }
        for (r = 0; r <= n; r++)
        {
            if (n == 0 || r == 0)
            {
                ncr = 1;
                printf("%d ",ncr);
            }

            else
            {
                ncr = ncr * (n - r + 1) / r;
                printf("%d ",ncr);
            }
        }
        printf("\n");
    }

    return 0;
}