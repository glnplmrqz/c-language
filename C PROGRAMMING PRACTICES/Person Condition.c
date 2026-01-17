/*
*/
#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        char name[100];
        int age;
        float temperature;

        printf("\n Enter Name: ");
        fgets(name, 100, stdin);
        name[strlen(name) - 1] = '\0';
        printf(" Age: ");
        scanf("%i", &age);
        printf(" Body Temperature: ");
        scanf("%f", &temperature);
        printf(" =================================================== \n");

        if(age >=10 && age <= 65 && temperature >= 36.1 && temperature <= 37.2){
            printf(" You are allowed to Enter \n");
            printf(" Age Granted! \n");
            printf(" Okay Normal Temperature! \n");
        }else{
            printf(" Name is %s \n", name);
            printf(" Please Stay at home! \n");
            printf(" You're not Allowed to Enter.. \n");
        }
        return 0;
    }