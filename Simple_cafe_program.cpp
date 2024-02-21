#include <iostream>
#include <cstring>

int main()
{
   int nSlection(0);
   int nTotalPrice(0);

   printf("\n----------Welcome----------\n");
   
   while (1)
   {
      printf("-----CAFE PROGRAM ------\n");
		printf("total:$%d\n",nTotalPrice);
		printf("1. ORDER\n");
		printf("2. PAY\n");
		printf("3. END\n");
		printf("INPUT:");
		scanf("%d", &nSlection);

      if (nSlection == 1)
      {
         int nMenuSelectNumber(0);
         int nMenuPrice(0);
         char cMenuName[20] = {};

         printf("ORDER>>>>>>\n");
			printf("-------------Menu-------------\n");
			printf("1. AMERICANO\t1000원\n");
			printf("2. CAFELATTE\t2000원\n");
			printf("3. GREENTEALATTE\t2500원\n");
			printf("4. JAVACHIP\t3000원\n");
			printf("5. STRAWBERRYLATTE\t2500원\n");
			printf("--------------------------------\n");
			printf("INPUT MENU NUMBER:");
			scanf("%d", &nMenuSelectNumber);

         if (nMenuSelectNumber == 1)
         {
            strcpy(cMenuName, "AMERICANO");
            nMenuPrice = 1000;
            nTotalPrice += nMenuPrice;
         }

         else if (nMenuSelectNumber == 2)
         {
            strcpy(cMenuName, "CAFELATTE");
            nMenuPrice = 2000;
            nTotalPrice += nMenuPrice;
         }

         else if (nMenuSelectNumber == 3)
         {
            strcpy(cMenuName, "GREENTEALATTE");
            nMenuPrice = 2500;
            nTotalPrice += nMenuPrice;
         }

         else if (nMenuSelectNumber == 4)
         {
            strcpy(cMenuName, "JAVACHIP");
            nMenuPrice = 3000;
            nTotalPrice += nMenuPrice;
         }

         else if (nMenuSelectNumber == 5)
         {
            strcpy(cMenuName, "STRAWBERRYLATTE");
            nMenuPrice = 2500;
            nTotalPrice += nMenuPrice;
         }
         else
         {
            printf("\WRONG INPUT\n");
         }

         printf("\nORDER: %s", cMenuName);
         printf("\nPRICE: %d\n", nMenuPrice);
      }

      else if (nSlection == 2)
      {
         int nPaySelectionNumber(0);

         printf("\n------------< Payment >------------\n");
         printf("\n1. CREDIT CARD");
         printf("\n2. CASH");
         printf("\nINPUT YOUR CHOICE: ");
         scanf("%d", &nPaySelectionNumber);

         if (nPaySelectionNumber == 1)
         {
            int nCardNumber(0);
            int nSizeOfCardNumber(0);

            printf("\nTOTAL PRICE: %d", nTotalPrice);
            printf("\nCREDIT CARD NUMBER: ");
            scanf("%d", &nCardNumber);

            printf("\nPAID");
            nTotalPrice = 0;
         }

         else if (nPaySelectionNumber == 2)
         {
            int nInputCash(0);
            int nChange(0);

            printf("\nTOTAL PRICE: %d", nTotalPrice);
            printf("\nCASH PAYMENT AMOUNT: ");
            scanf("%d", &nInputCash);
            
            if (nInputCash < nTotalPrice)
            {
               printf("\nNOT ENOUGH CASH");
               continue;
            }

            else
            {
               nChange = nInputCash - nTotalPrice;
               printf("\nPAID");
               printf("\nCHANGE: %d\n", nChange);
               nTotalPrice = 0;
            }
         }

         else
         {
            printf("WRONG INPUT");
         }

      }

      else if (nSlection == 3)
      {
         printf("\nBYE BYE");
         nTotalPrice = 0;
         break;
      }

      else
      {
         printf("WRONG INPUT");
      }
   }
}