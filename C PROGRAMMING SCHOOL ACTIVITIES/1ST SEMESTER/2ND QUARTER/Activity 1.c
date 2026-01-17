/*
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    int main()
    {
        // if- Statement
        // if(condition){
        // block of code to be executed if the condition is true

        char username[100], password[100];
        printf("\n [========== LOGIN ACCOUNT =========] \n");
        printf("\n Enter Username: ");
        fgets(username, 100, stdin);
        username[strlen(username) - 1] = '\0';
        printf(" Enter Password: ");
        fgets(password, 100, stdin);
        password[strlen(password) - 1] = '\0';

        if(strcmp(username, "Paul") == 0 && strcmp(password, "1701") == 0){
            printf("\n <<< WELCOME TO C++ PROGRAMMING >>> \n");
        }else{
            printf("\n <<< Incorrect Username and Password >>> \n");
        }
        return 0;
    }