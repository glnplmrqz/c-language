/*
*/
#include<stdio.h>
#include<stdlib.h>

    int main()
    {   
        char subjects[8][100] = {"MATH", "SCIENCE", "ENGLISH", "FILIPINO", 
                                 "RESEARCH", "C++ PROG.", "JAVA PROG.", "PYTHON PROG."};
        char again;
        int gradeInput[8];

        do{
        system("cls");
        printf("\n |=== GET THE AVERAGE OF 8 SUBJECTS ===| \n\n");
        double total = 0, average = 0;
        for(int x = 0; x < 8; x++){
            printf(" Enter Grade for %s: ",subjects[x]);
            scanf("%d", &gradeInput[x]);
            total += gradeInput[x];
            average = total/8;
        }
            printf("\n Your average grade in 8 Subject is %.2lf. \n", average);

            if(average >= 75){
                printf(" Remarks: PASSED! \n");
            }else{
                printf(" Remarks: FAILED! \n");
            }
                printf("\n Do you want to Continue ? (Type y or n): ");
                scanf(" %c", &again);
                getchar();
        }while(again == 'y' || again == 'Y');
        if(again == 'n' || again == 'N'){
            printf("\n <<< THANK YOU FOR USING THIS PROGRAM! BYE! \n");
        }else{
            printf(" !! INVALID OPTION !! \n");
        }
        return 0;
    }