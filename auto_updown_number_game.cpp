#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int nRandomNum(0);
    int nComputerAnswer = 50;
    int nFailCount = 1;
    printf("\nRandom Numbers is Generated!\n");
    printf("GAME START!\n");
    srand(time(NULL));
    nRandomNum = (rand() % 100)+ 1;
    printf("Random Number: %d\n", nRandomNum);

    for(int i = 0; i < 10; i++)
    {
        printf("Computer: %d\n", nComputerAnswer);

        if(nComputerAnswer == nRandomNum)
        {
            printf("Answer with Trial Number %d!", i+1);
            break;
        }
        else if(nComputerAnswer > nRandomNum)
        {
            printf("Down\n");
            nComputerAnswer /= 2;
        }
        else if(nComputerAnswer < nRandomNum)
        {
            printf("UP\n");
            nComputerAnswer = nComputerAnswer+(nComputerAnswer/2);
        }

        nFailCount++;
    }
    if(nFailCount == 10)
    {
        printf("FAIL\n");
    }
}