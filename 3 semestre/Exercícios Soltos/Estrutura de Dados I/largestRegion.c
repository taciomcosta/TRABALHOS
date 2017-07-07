#include <stdio.h>

int verifyConnection(int h, int w, int x[h][w], int k, int l);
void readPrint(int h, int w, int m[h][w]);

int main()
{
        /* vars */
        int T, HEIGHT, WIDTH, w, j, i;
        int m[50][50], area, areaMaior;

                scanf("%i", &T);
                int res[T];

                for (w = 0; w < T; w++) {
                        scanf("%i %i", &HEIGHT, &WIDTH);
                        readPrint(HEIGHT, WIDTH, m);
                        areaMaior = 0;

                        /* checking region for each element */
                        for (i = 0; i < HEIGHT; i++) {
                                for (j = 0; j < WIDTH; j++) {
                                        area = verifyConnection(HEIGHT, WIDTH, m, i, j);
                                        if (area > areaMaior)
                                                areaMaior = area;
                                }
                        }

                        res[w] = areaMaior;
                }

                for (w = 0; w < T; w++) {
                        printf("%i\n", res[w]);
                }

                return 0;
}

void readPrint(int h, int w, int m[h][w])
{
        int y, z;

        /* read an entire matrix in a unique line*/
        for (y = 0; y < h; y++) {
                for (z = 0; z < w; z++) {
                        scanf("%i", &m[y][z]);
                }
        }

        /* print */
        /* for (y = 0; y < h; y++) { */
        /*         for (z = 0; z < w; z++) { */
        /*                 printf("%i ", m[y][z]); */
        /*         } */
        /*         printf("\n"); */
        /* } */
}

int verifyConnection(int h, int w, int x[h][w], int k, int l)
{
        int cont = 0;

        /* verifies if it's a valid element */
        if (k >=0 && k < h && l >= 0 && l < w)
                if (x[k][l] == 1) {
                        x[k][l] = 0;
                        cont++;
                        /* direita */
                        cont += verifyConnection(h, w, x, k, l+1);
                        /* esquerda */
                        cont += verifyConnection(h, w, x, k, l-1);
                        /* cima */
                        cont += verifyConnection(h, w, x, k-1, l);
                        /* baixo */
                        cont += verifyConnection(h, w, x, k+1, l);
                        /* direita-cima */
                        cont += verifyConnection(h, w, x, k-1, l+1);
                        /* direita-baixo*/
                        cont += verifyConnection(h, w, x, k+1, l+1);
                        /* esquerda-cima */
                        cont += verifyConnection(h, w, x, k-1, l-1);
                        /* esquerda-baixo*/
                        cont += verifyConnection(h, w, x, k+1, l-1);
                }

        return cont;
}
