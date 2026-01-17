/*
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    int main()
    {
        char fruitStorage[5][1][100] = {{"Storage 1"}, {"Storage 2"}, {"Storage 3"}, 
                                        {"Storage 4"}, {"Storage 5"}};
        char inputFruits[5][1][100];
        char searchFruits[100], YN;

        do{
        system("cls");
        printf("\n |=============== FRUIT STORAGE ===============| \n");
        for(int x = 0; x < 5; x++){
        for(int y = 0; y < 1; y++){
            printf("  Enter Item in %s : ", fruitStorage[x][y]);
            fgets(inputFruits[x][y], 100, stdin);
            inputFruits[x][y][strlen(inputFruits[x][y]) - 1] = '\0';
        }
        }
        printf(" |=============================================| \n");

        printf("\n  What item you are Looking for? -> ");
        fgets(searchFruits, 100, stdin);
        searchFruits[strlen(searchFruits) - 1] = '\0';
        for(int x = 0; x < 5; x++){
        for(int y = 0; y < 1; y++){
        if(strcmp(inputFruits[x][y], searchFruits) == 0){
            printf("\n  Hmn...\n  The %s is located at %s. \n", searchFruits, fruitStorage[x][y]);
        }
        }
        }
            printf("\n  Enter another data (y/n)? ");
            scanf(" %c", &YN);
            getchar();
        }while(YN == 'y' || YN == 'Y');
        if(YN == 'n' || YN == 'N'){
            printf("\n  ********** END OF THE PROGRAM ********** \n");
            printf("\n  << THANK YOU FOR USING THIS PROGRAM >> \n");
        }
        return 0;
    }