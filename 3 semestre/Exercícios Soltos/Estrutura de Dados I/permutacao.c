#include <stdio.h>

#define LENGTH 4

void permutar(int *i, int *a, int *f);
void primeiro(int *v, int pos);
void imprimir(int *a);

int main()
{
    int v[LENGTH] = {0,1,2,3};

    int *inicio, *atual, *final ;

    inicio = v;
    atual = inicio;
    final = &v[LENGTH];

    imprimir(v);
    permutar(inicio, atual, final);

    return 0;
}

void permutar(int *i, int *a, int *f)
{
    int j;

    for (j = 0; &a[j] < f; j++) {
        primeiro(a, j);
        if (j != 0)
            imprimir(i);
        permutar(i, a+1, f);
        primeiro(a, j);
    }
}

void primeiro(int *v, int pos)
{
    if (v+pos == v)
        return;

    int aux = v[pos];
    v[pos] = v[pos-1];
    v[pos-1] = aux;
    primeiro(v, pos-1);

}

void imprimir(int *a)
{
    int j;

    for (j = 0; j < LENGTH; j++) {
        printf("%d", a[j]);
    }
    printf("\n");
}
