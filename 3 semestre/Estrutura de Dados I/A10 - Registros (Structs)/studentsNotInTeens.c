#include <stdio.h>

struct student {
        char name[30];
        int age;
        float scores[3];
};

struct student getData()
{
        struct student s;

        printf("\nName: ");
        __fpurge(stdin);
        scanf("%s", s.name);

        printf("Age: ");
        scanf("%i", &s.age);

        for (int i = 0; i < 3; i++) {
                printf("Score(%i): ", i);
                scanf("%f", &s.scores[i]);
        }

        return s;
}

void printData(struct student s)
{
        printf("\n--------------\n");
        printf("Name: %s\n", s.name);
        printf("Age: %i\n", s.age);
        for (int i = 0; i < 3; i++) {
                printf("Scores(%i): %.2f\n", i, s.scores[i]);
        }
}

int main(void)
{
        printf("STUDENTS NOT IN THEIR TEENS\n\n");

        /* vars */
        struct student s1, s2, s3;
        int studentsInTeen = 0;

        /* input */
        s1 = getData();
        s2 = getData();
        s3 = getData();

        /* process */
        if (s1.age >= 18)
                studentsInTeen++;
        if (s2.age >= 18)
                studentsInTeen++;
        if (s3.age >= 18)
                studentsInTeen++;

        /* output */
        system("clear");
        printf("\n\nDATA\n");
        printData(s1);
        printData(s2);
        printData(s3);

        printf("\n Students NOT in teens: %i\n", studentsInTeen);

        return 0;
}
