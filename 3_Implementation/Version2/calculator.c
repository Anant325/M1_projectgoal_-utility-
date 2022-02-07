

#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h>
#include "calculator.h"

int  Calculator()
{
    float n1, n2, r=0;
   int selc;
   do

   {
      printf("1. Addition\n");
      printf("2. Subtraction\n");
      printf("3. Multiplication\n");
      printf("4. Division\n");
      printf("5. Exit\n\n");
      printf("Enter Your Choice(1-5): ");
      scanf("%d", &selc);
      if(selc>=1 && selc<=4)
      {
         printf("\nEnter any two Numbers: ");
         scanf("%f %f", &n1, &n2);
      }
      switch(selc)
      {
         case 1:
            r = n1+n2;
            printf("\nResult = %0.2f", r);
            break;
         case 2:
            r = n1-n2;
            printf("\nResult = %0.2f", r);
            break;
         case 3:
            r = n1*n2;
            printf("\nResult = %0.2f", r);
            break;
         case 4:
            r = n1/n2;
            printf("\nResult = %0.2f", r);
            break;
         case 5:
            return 0;
         default:
            printf("\nWrong Choice!");
            break;
      }
      printf("\n------------------------\n");
   }while((selc!=5)||(isdigit(!selc));
   //getc();
   return 0;
}



