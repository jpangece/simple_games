
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int nRandomNum(0);
    int nInputNum(0);
    int nfaleCount(0);
    char arRePlayAnswer[10];
    
    while (true)
    {
        printf("\nRandom Numbers is Generated!\n");
        printf("GAME START!\n");
        srand(time(NULL));
        nRandomNum = (rand() % 100)+ 1;

        for (int i = 0; i < 10; i++)
        {
            printf("\nTrial number %d\n", i + 1);
            printf("Input Number: ");
            scanf("%d", &nInputNum);

            if (nRandomNum == nInputNum)
            {
                printf("\nVictory with %d Trials!\n", i + 1);
                break;
            }
            else if (nRandomNum > nInputNum)
            {
                printf("UP\n");
            }
            else
            {
                printf("DOWN\n");
            }
            nfaleCount = i + 1;
        }

        if (nfaleCount == 10)
        {
            printf("FAILED!\n");
        }

        printf("REPLAY: ");
        scanf("%s", arRePlayAnswer);

        if (arRePlayAnswer[0] == 'N' || arRePlayAnswer[0] == 'n')
        {
            break;
        }
    }

    
}