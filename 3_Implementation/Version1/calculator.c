
#include <stdio.h>
#include <stdlib.h>

int add(float x, float y)
{
    float res=0;
    res=x+y;
    printf("\nResult = %0.2f", res);
    return 0;
}
int  sub(float x, float y)
{
    float res=0;
    
    if (x>y)
    {
       res=x-y; 
    }
    else 
    {
        res=y-x;
    }
     printf("\nResult = %0.2f", res);
    return 0;
}
int divi(float x, float y)
{
    float res=0;
     res=x/y;
    printf("\nResult = %0.2f", res);
    return 0;
}
int multi(float x, float y)
{
    float res=0;
     res=x*y;
    printf("\nResult = %0.2f", res);
    return 0;
}

int main()
{ 
    int ip,selc;
    float n1,n2;
    
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
    printf("2.Sintific\n");
    scanf("%d",&ip);
    do{
        
    if( ip == 1)
    {
      printf("You have Selected Standard Mode\n")  ;
      printf("*****************************************************************************\n");
      do
   {
       
    printf("Enter number 1\n");
      scanf("%f",&n1);
      printf("Enter number 2\n");
      scanf("%f",&n2);
      printf("1. Addition\n");
      printf("2. Subtraction\n");
      printf("3. Multiplication\n");
      printf("4. Division\n");
      printf("5. Exit\n\n");
      printf("Enter Your Choice(1-5): ");
      scanf("%d", &selc);
 
      switch(selc)
      {
         case 1:
            add(n1,n2);
            break;
         case 2:
          sub(n1,n2);
            break;
         case 3:
         multi(n1,n2);
            break;
         case 4:
            divi(n1,n2);
            break;
         case 5:
            return 0;
         default:
            printf("\nWrong Choice!");
            break;
      }
      printf("\n------------------------\n");
   }while(selc!=5);
      exit(0);
    }
    else if (ip == 2)
    {
        printf("You have Selected Sintific Mode\n")  ;
        
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




