/*
*/
#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        char element;

        do{
        system("cls");
        printf("\n [========= WELCOME TO ELEMENT IDENTIFIER =========] ");
        printf("\n Enter Element: ");
        scanf("%c", &element);
        printf("\n =================================================== \n");

        if(isdigit(element)){
            printf(" Data entered: %c is Numeric \n", element);
            printf(" Oh, I see number.. \n");
        }else if(isalpha(element)){
            if(tolower(element) == 'a' || tolower(element) == 'e' || tolower(element) == 'i' ||
                tolower(element) == 'o' || tolower(element) == 'u'){
            if(islower(element)){
                    printf(" Data entered: %c is Lowercase Alphabet! \n", element);
                    printf(" Oh, It's a Vowel.. \n");
            }else{
                printf(" Data entered: %c is UPPERCASE Alphabet! \n", element);
                printf(" Oh, It's a Vowel.. \n");
            }
        }else{
            if(islower(element)){
                printf(" Data entered: %c is Lowercase Alphabet! \n", element);
                printf(" Oh, It's a Consonant.. \n");
            }else{
                printf(" Data entered: %c is UPPERCASE Alphabet! \n", element);
                printf(" Oh, It's a Consonant.. \n");
            }
        }   
        }else{
            printf(" Element is %c \n hmn.. I see Special Character \n", element);
        }
            printf("\n Check another Element? (y/n):> ");
            scanf(" %c", &element);
            getchar();
        }while(element == 'y' || element == 'Y');
        if(element == 'n' || element == 'N'){
            printf("\n Program Well Done, Thank You! \n");
            printf("\n <<=============== END OF THE PROGRAM! ===============>> \n");
        }else{
            printf("\n ***** INVALID KEYS ***** \n");
            printf("\n <<=============== END OF THE PROGRAM! ===============>> \n");
        }
        return 0;
    }