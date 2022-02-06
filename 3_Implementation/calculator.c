/**
 * @file calculator.c
 * @author Anant Singh (you@domain.com)
 * @brief  calculator
 * @version 0.1
 * @date 2022-02-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h> 
//#include <Calculator.h>

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
   }while(selc!=5);
   //getc();
   return 0;
}

int main()
{ 
    int ip;
    
    printf("****************************************************************************************\n");
    printf("****************************************************************************************\n");
    printf("*##                                                                                  ##*\n");
    printf("*##                                                                                  ##*\n");
    printf("*##                                  CALCULATOR                                      ##*\n");
    printf("*##                                                                                  ##*\n");
    printf("*##                                                                                  ##*\n");
    printf("****************************************************************************************\n");
    printf("****************************************************************************************\n");
    printf("Type Of Calculator\n");
    printf("1.Standard\n");
    printf("2.Scientific\n");
    scanf("%d",&ip);
    do{
        
    if( ip == 1)
    {
      printf("You have Selected Standard Mode\n")  ;
      Calculator ();
      exit(0);
    }
    else if (ip == 2)
    {
        printf("You have Selected Scientific Mode\n")  ;
        
       exit(0); 
    }
    else 
    {
      printf("Wrong Input/n");
      printf("\n------------------------\n");
      
      exit(0);
    }
    }while(ip<=2);
    
    
    
    
    return 0;
}


