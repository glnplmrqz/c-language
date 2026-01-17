/*
*/
#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        int testNumber, score;
        double weightedScore;

        printf("\n Input Test number: ");
        scanf("%d", &testNumber);
        printf(" Input Score: ");
        scanf("%d", &score);

        switch(testNumber)
        {
            case 1: 
                weightedScore = score * 0.10;
                printf(" A Score of %d on test %d gives a weighted score of %.1lf \n", score, testNumber, weightedScore);
                break;
            case 2:
            case 3:
                weightedScore = score * 0.20;
                printf(" A Score of %d on test %d gives a weighted score of %.1lf \n", score, testNumber, weightedScore);
                break;
            case 4:
            case 5: 
                weightedScore = score * 0.15;
                printf(" A Score of %d on test %d gives a weighted score of %.1lf \n", score, testNumber, weightedScore);
                break;
            case 6:
                weightedScore = score * 0.29;
                printf(" A Score of %d on test %d gives a weighted score of %.2lf \n", score, testNumber, weightedScore);
                break;
            default:
                printf(" Invalid Test Number!, Try Again.. \n");
                break;
        }
        return 0;
    }