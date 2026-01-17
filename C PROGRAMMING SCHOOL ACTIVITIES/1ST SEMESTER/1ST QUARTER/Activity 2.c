/*
*/
#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        float prelimGrade, midtermGrade, finalGrade, average;
        printf("\n Enter your Prelim Grade: ");
        scanf("%f", &prelimGrade);
        printf(" Enter your Midterm Grade: ");
        scanf("%f", &midtermGrade);
        printf(" Enter your Final Grade: ");
        scanf("%f", &finalGrade);

        average = (prelimGrade + midtermGrade + finalGrade)/3;
        printf(" Average Grade: %.2f \n", average);

        if(average == 95){
            printf(" Very Good...!!! \n");
        }else if(average >= 80){
            printf(" Good \n");
        }else{
            printf(" Needs Improvement \n");
        }
        return 0;
    }