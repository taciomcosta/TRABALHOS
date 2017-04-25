#include <stdio.h>

int fib(int n)
{
        if (n > 2) {
                return fib(n-1) + fib(n-2);
        }

        return 1;
}

int main(void)
{

        int n;

        printf("N: ");
        scanf("%i", &n);

        printf("%i: %i", n, fib(n));
        putchar('\n');

        return 0;
}
