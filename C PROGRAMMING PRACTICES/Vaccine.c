/*
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    int main()
    {
        char fullName[100], gender[100];
        int age, vaccineCode;
        long long int contactNumber;

        printf("\n PROGRAMMED BY      : MARQUEZ, GLEN PAUL \n");
        printf(" SECTION            : IC2MF \n");
        printf(" SUBJECT            : C LANGUAGE PROGRAMMING \n");
        printf(" TOPIC              : CONDITIONAL IF-ELSE, SWITCH-CASE STATEMENT \n");

        printf("\n [======== WELCOME TO RESBAKUNA FORM ========] \n");
        printf("\n  ENTER YOUR DETAILS BELOW: \n");

        printf("\n  FULL NAME: ");
        fgets(fullName, 100, stdin);
        fullName[strlen(fullName) - 1] = '\0';
        printf("  GENDER: ");
        fgets(gender, 100, stdin);
        gender[strlen(gender) - 1] = '\0';
        printf("  AGE: ");
        scanf("%d", &age);
        printf("  CONTACT: ");
        scanf("%lld", &contactNumber);
        

        printf(" =================================================================== \n");
        printf("  FULL NAME: %s \n", fullName);
        printf("  GENDER: %s \n", gender);
        printf("  AGE: %d \n", age);
        printf("  CONTACT: %lld\n", contactNumber);
        printf(" =================================================================== \n");

        if(age >= 18){
            printf("  YOUR AGE IS: %d \n", age);
            printf("\n  REMARKS: QUALIFIED FOR COVID19 VACCINATION \n");
            printf(" *************** [CHOOSE YOUR VACCINE BELOW] *************** \n");
            printf("        [ CODE ]      [ BRAND ] \n");
            printf("           1         BioNTech, Pfizer Vaccine \n");
            printf("           2         Moderna Vaccine \n");
            printf("           3         Sputnik V Vaccine \n");
            printf("           4         Novavax Vaccine \n");
            printf("           5         Oxford, AstraZeneca Vaccine \n");
            printf("           6         Johnson & Johnson Vaccine \n");
            printf("           7         Sinovac Vaccine \n");
            printf(" *********************************************************** \n");

            printf("\n ENTER VACCINE CODE: ");
            scanf("%d", &vaccineCode);

            switch (vaccineCode)
            {
            case 1:
                printf(" You Choose 1: \n");
                printf("\n ]== BioNTech, Pfizer Vaccine ==(> \n\n");
                break;
            case 2:
                printf(" You Choose 2: \n");
                printf("\n ]== Moderna Vaccine ==(> \n\n");
                break;
            case 3:
                printf(" You Choose 3: \n");
                printf("\n ]== Sputnik V Vaccine ==(> \n\n");
                break;
            case 4:
                printf(" You Choose 4: \n");
                printf("\n ]== Novavax Vaccine ==(> \n\n");
                break;
            case 5:
                printf(" You Choose 5: \n");
                printf("\n ]== Oxford, AstraZeneca Vaccine ==(> \n\n");
                break;
            case 6:
                printf(" You Choose 6: \n");
                printf("\n ]== Johnson & Johnson Vaccine ==(> \n\n");
                break;
            case 7:
                printf(" You Choose 7: \n");
                printf("\n ]== Sinovac Vaccine ==(> \n\n");
                break;
            default:
                printf(" You've Entered Invalid Vaccine Code, Try Again! \n");
                exit(0);
            }
        }else{
            printf("\n  REMARKS: YOU'RE NOT QUALIFIED IN COVID19 VACCINATION \n");
        }
            printf("\n\n  PROTEKTODO sa Bakunang Sigurado \n");
            printf("\n  # STAY HOME. SAVE LIVES # \n");
            printf("  Help Stop Coronavirus.. \n");
            printf("\n                           PROGRAM WELL DONE... \n");
            printf(" !!<<==NOTE: THIS PROGRAM IS MADE FOR STUDENTS' PRACTICAL TEST ==>!! \n");
        return 0;
    }