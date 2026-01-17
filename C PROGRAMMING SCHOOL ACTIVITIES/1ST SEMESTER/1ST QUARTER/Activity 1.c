/*
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    int main()
    {
        char firstName[20], middleName[20], lastName[20];
        printf("\n Enter your First Name: ");
        fgets(firstName, 20, stdin);
        firstName[strlen(firstName) - 1] = '\0';
        printf(" Enter your Middle Name: ");
        fgets(middleName, 20, stdin);
        middleName[strlen(middleName) - 1] = '\0';
        printf(" Enter your Last Name: ");
        fgets(lastName, 20, stdin);
        lastName[strlen(lastName) - 1] = '\0';
        printf(" Your name is: %s %s %s \n", firstName, middleName, lastName);
        return 0;
    }