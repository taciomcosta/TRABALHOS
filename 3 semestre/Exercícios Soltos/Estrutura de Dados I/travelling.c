/*
  TRAVELLING SALESMAN PROBLEM
  Author: Tácio M. Costa
  Acess: http://practice.geeksforgeeks.org/problems/travelling-salesman-problem/0
 */
#include <stdio.h>

int calculateMinCost(int line, int N, int m[][N], int p[]);

int main(void)
{
        /* vars */
        int testCases, i, j, N, contTestCases;

        scanf("%i", &testCases);
        int results[testCases];

        for (contTestCases = 0; contTestCases < testCases; contTestCases++) {
                scanf("%i", &N);
                int M[N][N];
                int levelPossibilities[N];

                /* reading matrix */
                for (i = 0; i < N; i++) {
                        for (j = 0; j < N; j++) {
                                scanf("%i", &M[i][j]);
                        }
                }

                /* initializing array*/
                for (i = 0; i < N; i++) {
                        levelPossibilities[i] = i;
                }

                /* levelPossibilities[0] contains the numbers of results to the next tree level */
                levelPossibilities[0] = N - 1;

                results[contTestCases] = calculateMinCost(0, N, M, levelPossibilities);
        }
        for (contTestCases = 0; contTestCases < testCases; contTestCases++) {
                printf("%i ", results[contTestCases]);
                putchar('\n');
        }

        return 0;
}

int calculateMinCost(int line, int N, int m[][N], int p[])
{
        if (p[0] != 0) {
                int parcialCost;
                int min;
                int i = 1;

                /* find the first travel possibility, for making that equals to the first min cost possible */
                while (i == line || p[i] == -1)
                        i++;

                p[i] = -1;
                /* PRINT FIRST POSIBILITY OF THIS LEVEL - printf("%i%i\n", line, i); */
                p[0]--;
                parcialCost = calculateMinCost(i, N, m, p);
                p[0]++;
                p[i] = i;
                min = parcialCost + m[line][i];
                i++;

                while (i < N) {
                        if (i != line && p[i] != -1) {
                                p[i] = -1;
                                /* PRINT REMAINING POSIBILITY OF THIS LEVEL - printf("%i%i\n", line, i); */
                                p[0]--;
                                parcialCost = calculateMinCost(i, N, m, p);
                                p[0]++;
                                p[i] = i;

                                if (parcialCost + m[line][i] < min) {
                                        min = parcialCost + m[line][i];
                                }
                        }
                        i++;
                }

                return min;
        } else {
                return m[line][0];
        }
}
