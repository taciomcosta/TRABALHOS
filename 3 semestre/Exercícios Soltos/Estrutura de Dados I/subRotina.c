#include <stdio.h>


float *bubbleSort(float *w);

int main()
{
    /* STATEMENTS */
    float v[5], *u;
    int i;

    /* INPUT */
    for (i = 0; i < 5; i++) {
        printf("Insert v[%d]: ", i);
        scanf("%f", &v[i]);
    }

    /* PROCESS */
    u = bubbleSort(v);

    /* OUTPUT */
    printf("\n\nSORTED:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", u[i]);
    }

}

float *bubbleSort(float *w)
{
    int unsorted = 1,
        j = 0,
        k;
    float aux;

    while (unsorted) {
        unsorted = 0;
        for (k = j+1; k < 5; k++) {
            if (w[j] > w[k]) {
                aux = w[j];
                w[j] = w[k];
                w[k] = aux;
                unsorted = 1;
            }
        }
        j++;
    }

    return w;
}
