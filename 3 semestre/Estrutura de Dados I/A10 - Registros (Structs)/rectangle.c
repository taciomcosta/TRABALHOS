#include <stdio.h>

struct point {
        int x;
        int y;
};

struct rectangle {
        struct point p1;
        struct point p2;
        struct point p3;
        struct point p4;
};

int main(void)
{
        printf("CHECKING IF POINTS MAKE A VALID RECTANGLE\n\n");

        struct rectangle rec;

        /* input */
        printf("Insert Px(1): ");
        scanf("%i", &rec.p1.x);
        printf("Insert Py(1): ");
        scanf("%i", &rec.p1.y);

        printf("Insert Px(2): ");
        scanf("%i", &rec.p2.x);
        printf("Insert Py(2): ");
        scanf("%i", &rec.p2.y);

        printf("Insert Px(3): ");
        scanf("%i", &rec.p3.x);
        printf("Insert Py(3): ");
        scanf("%i", &rec.p3.y);

        printf("Insert Px(4): ");
        scanf("%i", &rec.p4.x);
        printf("Insert Py(4): ");
        scanf("%i", &rec.p4.y);

        if (rec.p1.y == rec.p2.y &&
            rec.p2.x == rec.p3.x &&
            rec.p3.y == rec.p4.y &&
            rec.p4.x == rec.p1.x &&
            rec.p1.x != rec.p2.x &&
            rec.p2.y != rec.p3.y &&
            rec.p3.x != rec.p4.x &&
            rec.p4.y != rec.p1.y)
                printf("\n\nIt's a valid rectangle!!!\n");
        else
                printf("\n\nIt's NOT a valid rectangle!!!\n");

        return 0;
}
