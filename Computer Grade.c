/*
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

    void loading()
{
    int loadingDot;

    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tLoading");

    for(loadingDot = 0; loadingDot < 6; loadingDot++){
        printf(" . ");
        Sleep(250);
    }
    printf("\n\n\n\t\t\t\t\tTHANK YOU FOR WAITING!");

    for(loadingDot = 0; loadingDot < 6; loadingDot++){
        Sleep(100);
    }
        system("cls");
        computeGrade();
}

    void computeGrade()
{
        char name[100], section[100];
        float ucsp, php, prr, fil, peh, emptech, java, cpp;
        float average;

        printf("\n ========== Computing Average Grade ========== \n");
        
        // Input Name & Section
        printf("\n Enter your name: ");
        fgets(name, 100, stdin);
        name[strlen(name) - 100] = '\0';
        printf(" Enter your section: ");
        fgets(section, 100, stdin);
        section[strlen(section) - 1] = '\0';

        // Input Grade
        system("cls");
        printf("\n Enter Grade in Understanding, Culture, Society and Politics: ");
        scanf("%f", &ucsp);
        printf(" Enter Grade in Philosophy: ");
        scanf("%f", &php);
        printf(" Enter Grade in Practical Research 2: ");
        scanf("%f", &prr);
        printf(" Enter Grade in Filipino sa Piling Larang: ");
        scanf("%f", &fil);
        printf(" Enter Grade in Physical Education and Health 3: ");
        scanf("%f", &peh);
        printf(" Enter Grade in Empower IT Technologies: ");
        scanf("%f", &emptech);
        printf(" Enter Grade in Java Programming: ");
        scanf("%f", &java);
        printf(" Enter Grade in C++ Programming: ");
        scanf("%f", &cpp);

        // Formula
        average = (ucsp + php + prr + fil + peh + emptech + java + cpp)/8;

        // Display
        system("cls");
        printf("\n Name: %s", name);
        printf(" Section: %s\n", section);
        printf(" Average Grade: %.2f \n", average);

        if(average >= 98){
            printf(" Remarks: With Highest Honor... Congratulations...\n");
        }else if(average >=95){
            printf(" Remarks: With High Honor... Congratulations...\n");
        }else if(average >= 90){
            printf(" Remarks: With Honor... Congratulations...\n");
        }else if(average >= 75){
            printf(" Remarks: Passed!... Congratulations...\n");
        }else{
            printf(" Remarks: Don't worry, I know you did your best and just keep going... \n");
        }
            Looping();
}
    void Looping()
{
    char again;
      printf("\n Do you want to input Grade again? [y/n]: ");
      scanf(" %c", &again);
      getchar();

      if(again == 'y' || again == 'Y'){
            system("cls");
            computeGrade();
      }          
}

    int main()
    {
        loading();
        return 0;
    }