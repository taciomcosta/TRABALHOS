/*Ordenação de dados por Bubble Sort*/

#include <stdio.h>
int main(void)
{
    int vetor[10] = {10,9,8,7,6,5,4,3,2,1};
    int tamanho = 10;
    int aux;
    
    for(int i=tamanho-1; i >= 1; i--) 
    {  
        for( int j=0; j < i ; j++) 
        {
            if(vetor[j]>vetor[j+1]) 
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    for( int r = 0; r < 10; ++r)
    {
        printf("%d\n",vetor[r]);
    }
}