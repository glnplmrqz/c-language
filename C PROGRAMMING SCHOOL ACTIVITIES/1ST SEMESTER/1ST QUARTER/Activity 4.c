/*
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    int main()
    {
        char lastName[30];
        float attendance, recitation, quizzes, project;
        float att1, r1, q1, p, cs;

        printf("\n Enter your Lastname: ");
        fgets(lastName, 30, stdin);
        lastName[strlen(lastName) - 1] = '\0';
        printf(" Enter your Average Attendance: ");
        scanf("%f", &attendance);
        printf(" Enter your Average Recitation: ");
        scanf("%f", &recitation);
        printf(" Enter your Average Quizzes: ");
        scanf("%f", &quizzes);
        printf(" Enter your Average Project: ");
        scanf("%f", &project);

        att1 = attendance * .1;
        r1 = recitation * .3;
        q1 = quizzes * .4;
        p = project * .2;
        cs = att1 + r1 + q1 + p;

        printf("\n Last name: %s \n",lastName);
        printf(" Attendance: %.0f\n", att1);
        printf(" Recitation: %.0f\n", r1);
        printf(" Quizzes: %.0f\n", q1);
        printf(" Project: %.0f\n", p);
        printf(" Class Standing: %.0f%\n", cs);
        return 0;
    }