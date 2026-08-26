#include <stdio.h>

int main()
{
    int rows, n, r;
    int nfact, rfact, nrfact;
    int i, j, k, ncr, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (n = 0; n < rows; n++)
    {
        for (space = 0; space < rows - n - 1; space++)
        {
            printf(" ");
        }

        
        for (r = 0; r <= n; r++)
        {
            nfact = 1;
            rfact = 1;
            nrfact = 1;

            
            for (i = 1; i <= n; i++)
            {
                nfact *= i;
            }

            
            for (j = 1; j <= r; j++)
            {
                rfact *= j;
            }

             
            for (k = 1; k <= (n - r); k++)
            {
                nrfact *= k;
            }

            
            ncr = nfact / (rfact * nrfact);

            printf("%d ", ncr);
        }

        printf("\n");
    }

    return 0;
}