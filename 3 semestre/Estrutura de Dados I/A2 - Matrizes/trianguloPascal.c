#include <stdio.h>

int main()
{
    /* vars */
    int n, i, j;

    printf("\tPASCAL'S TRIANGLE\n");

    /* input */
    printf("Insert a number N: ");
    scanf("%d", &n);

    int m[n][n];

    /* initializing matrix */
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            m[i][j] = 0;
        }
    }


    /* calculating triangle */
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            /* calculating each element */
            if (j == 0) {
                m[i][j] = 1;
            } else {
                m[i][j] = m[i-1][j-1] + m[i-1][j];
            }
        }
    }

    /* printing triangle */
    for (i = 0; i < n; i++) {
        for (j = n-1; j >= 0; j--) {
            if (m[i][j] == 0) {
                printf(" ");
            } else {
                printf("%d ", m[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
}
