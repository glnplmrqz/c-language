/*
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void loginAccount()
{
    char username[100], password[100];

    system("cls");
    printf("\n Enter Username: ");
    fgets(username, 100, stdin);
    username[strlen(username) - 1] = '\0';
    printf(" Enter Password: ");
    fgets(password, 100, stdin);
    password[strlen(password) - 1] = '\0';

    if(strcmp(username, "Paul")== 0 && strcmp(password, "1701") == 0){
        printf(" \n << WELCOME TO C LANGUAGE PROGRAMMING >> \n");
    }else{
        loginAccount();
    }
    
}
    int main()
    {
        loginAccount();
        return 0;
    }