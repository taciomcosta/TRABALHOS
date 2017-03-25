#include <stdio.h>

main()
{
    printf("N Primeiros Primos\n\n");

    //vars
    int n, num=2, divisor, contPrimo, contQtd=0;

    //Entrada
    printf("Digite a quantidade de numeros primos: ");
    scanf("%d",&n);

    while(contQtd != n)
    {
        contPrimo = 0;
        for(divisor=1; divisor<=num; divisor++)
        {
            if(num%divisor == 0)
                contPrimo++;
        }

        if(contPrimo == 2)
        {
            printf("%d\n", num);
            contQtd++;
        }

        num++;

    }

}
