#include <stdio.h>

#define WIDTH 5
#define HEIGHT 5

int verifyConection(int (*x)[5], int k, int l, int cont)
{
    if (x[k][l] == 1) {
        x[k][l] = 0;

        /* dir */
        if (l+1 < WIDTH)
            cont = verifyConection(x, k, l+1, cont);
        /* esq */
        if (l-1 > 0)
            cont = verifyConection(x, k, l-1, cont);
        /* cima */
        if (k-1 > 0)
            cont = verifyConection(x, k-1, l, cont);
        /* baixo */
        if (k+1 < HEIGHT)
            cont = verifyConection(x, k+1, l, cont);
        /* dir-cima */
        if (k-1 > 0 && l+1 < WIDTH)
            cont = verifyConection(x, k-1, l+1, cont);
        /* dir-baixo*/
        if (k+1 < HEIGHT && l+1 < WIDTH)
            cont = verifyConection(x, k+1, l+1, cont);
        /* esq-cima */
        if (k-1 < HEIGHT && l-1 < WIDTH)
            cont = verifyConection(x, k-1, l-1, cont);
        /* esq-baixo*/
        if (k+1 < HEIGHT && l-1 < WIDTH)
            cont = verifyConection(x, k+1, l-1, cont);

        return cont++;

    } else {

        return cont;

    }
}

int main()
{
    /* vars */
    int m[WIDTH][HEIGHT] = {{1, 0, 0, 0, 1},
                            {1, 0, 0, 0, 1},
                            {1, 0, 0, 0, 1},
                            {1, 0, 0, 0, 0},
                            {1, 0, 0, 0, 0}},
        i, j, area,
        areaMaior = 0;

    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            area = verifyConection(m, i, j, 0);
            if (area > areaMaior) {
                areaMaior = area;
            }
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Largest region: %d\n", areaMaior);

    return 0;
}
