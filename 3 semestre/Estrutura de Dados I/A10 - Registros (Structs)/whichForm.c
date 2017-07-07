/* checks if 4 points shapes a rectangle, square, diamond or none of them */
#include <stdio.h>
#include <stdlib.h> // used for int abs(int)

struct point {
        float x;
        float y;
};

struct shape {
        struct point p[4];
};

void check_shape(struct shape s)
{
        /* checks for rectangle */
        if (s.p[0].y == s.p[1].y && s.p[0].x != s.p[1].x &&
            s.p[1].y != s.p[2].y && s.p[1].x == s.p[2].x &&
            s.p[2].y == s.p[3].y && s.p[2].x != s.p[3].x &&
            s.p[3].y != s.p[0].y && s.p[3].x == s.p[0].x) {
                /* checking for square */
                if (abs(s.p[0].x - s.p[1].x) == abs(s.p[1].y - s.p[2].y)) {
                        printf("\nIt's a square and a rectangle!!!\n");
                } else {
                        printf("\nIt's a rectangle!!!\n");
                }
                return;
        }

        /* checks for diamond */
        if (s.p[0].x == s.p[2].x && s.p[2].x == (s.p[1].x + s.p[3].x) / 2 &&
            s.p[1].y == s.p[3].y && s.p[3].y == (s.p[0].y + s.p[2].y) / 2 &&
            s.p[0].x != s.p[1].x && s.p[0].y != s.p[2].y &&
            s.p[1].y != s.p[0].y && s.p[1].x != s.p[3].x) {
                printf("\nIt's a diamond!!!\n");
                return;
        }

        printf("\nIt doesn't shape a rectangle, square or a diamond\n");

}

int main(void)
{
        printf("SHAPES A FORM\n\n");

        struct shape s;

        /* input */
        for (int i = 0; i < 4; i++) {
                printf("Px(%i): ", i + 1);
                scanf("%f", &s.p[i].x);
                printf("Py(%i): ", i + 1);
                scanf("%f", &s.p[i].y);
        }

        /* output */
        printf("\nCOORDINATES\n");
        for (int i = 0; i < 4; i++)
                printf("P%i(%.2f, %.2f)\n", (i + 1), s.p[i].x, s.p[i].y);

        check_shape(s);

        return 0;
}
