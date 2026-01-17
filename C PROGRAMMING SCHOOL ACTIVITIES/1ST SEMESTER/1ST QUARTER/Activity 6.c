/*
*/
#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        int attendance, recitation, quiz1, quiz2, project, majorExam;
        double attendance2, recitation2, quizAverage, quizzes, project2, classStanding, prelimGrade;

        // Input
        printf("\n [================= FIRST QUARTER PERIOD =================] \n");
        printf("  ATTENDANCE                   : ");
        scanf("%d", &attendance);
        printf("  RECITATION                   : ");
        scanf("%d", &recitation);
        printf("\n  QUIZZES \n");
        printf("  Enter QUIZ 1                 : ");
        scanf("%d", &quiz1);
        printf("  Enter QUIZ 2                 : ");
        scanf("%d", &quiz2);
        printf("  PROJECT                      : ");
        scanf("%d", &project);
        printf("  MAJOR EXAM                   : ");
        scanf("%d", &majorExam);

        // Formula
        attendance2 = attendance * 0.10;
        recitation2 = recitation * 0.30;
        quizAverage = (quiz1 + quiz2)/2;
        quizzes = quizAverage * 0.40;
        project2 = project * 0.20;
        classStanding = attendance2 + recitation2 + quizzes + project2;
        prelimGrade = (classStanding * 2 + majorExam )/3;

        // Display
        printf("  ========================================================= \n");
        printf("  ATTENDANCE                   : %.0lf \n", attendance2);
        printf("  RECITATION                   : %.0lf \n", recitation2);
        printf("  QUIZZES                      : %.0lf \n", quizzes);
        printf("  PROJECT                      : %.0lf \n", project2);
        printf("  YOUR CLASS STANDING IS       : %.0lf%\n", classStanding);
        printf("  YOUR PRELIM GRADE IS         : %.0lf%\n", prelimGrade);

        printf(" [================= END OF THE PROGRAM =================] \n");
        return 0;
    }