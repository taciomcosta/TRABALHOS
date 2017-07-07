#include <stdio.h>

int mdc(int x, int y)
{
        if (x > y) {
                return mdc(x-y, y);
        } else if (x < y) {
                return mdc(y, x);
        }

        return x;
}

int main(void)
{
        int n1, n2;

        printf("Insert n1: ");
        scanf("%i", &n1);

        printf("Insert n2: ");
        scanf("%i", &n2);

        printf("\nMDC = %i\n", mdc(n1, n2));
        return 0;
}
