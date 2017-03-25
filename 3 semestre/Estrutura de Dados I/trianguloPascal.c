#include <stdio.h>

int main()
{
    /* STATEMENTS */
    int m[3][3], i, j;
    int res[3][3];

    /* INPUT */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    /* PROCESS */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            res[j][i] = m[i][j];
        }
    }

    /* OUTPUT */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            m[i][j] = res[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
