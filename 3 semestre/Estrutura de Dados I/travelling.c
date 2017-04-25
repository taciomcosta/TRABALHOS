#include <stdio.h>
#define N 3

int calculateMinCost(int line, int m[][N], int r[], int elementCost);

int main(void)
{
        /* vars */
        int M[N][N] = {
                {0, 1000, 5000},
                {5000, 0, 1000},
                {1000, 5000, 0}
        };
        int reached[N];
        int i, j;

        /* initializing array*/
        for (i = 0; i < N; i++) {
                reached[i] = i;
        }
        reached[0] = -1;


        printf("\nMin cost: %i", calculateMinCost(0, M, reached, 100000));
        putchar('\n');

        return 0;
}

int calculateMinCost(int line, int m[][N], int r[], int elementCost)
{
        if (line < N) {
                int i, parcialCost,
                        min = 1;

                for (i = 0; i < N; i++) {
                        if (i != line && r[i] != -1) {
                                r[i] = -1;
                                printf("%02d (%i%i)\n", m[line][i], line, i);
                                parcialCost = calculateMinCost(i, m, r, m[line][i]);
                                r[i] = i;
                                if (parcialCost + elementCost < min)
                                        min = parcialCost + elementCost;
                        }
                }

                return min;
        }

        return 0;
}
