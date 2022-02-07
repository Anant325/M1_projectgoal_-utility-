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
#include <math.h>
struct complex
{
  float real, img;
};

int main()
{
    int ch;
  float  x, y, z;
  struct complex a, b, c;

  while(1)
  {
    printf("Press 1 to add two complex numbers.\n");
    printf("Press 2 to subtract two complex numbers.\n");
    printf("Press 3 to multiply two complex numbers.\n");
    printf("Press 4 to divide two complex numbers.\n");
    printf("Press 5 to exit.\n");
    printf("Enter your choice\n");
    scanf("%d", &ch);

    if (ch == 5)
      exit(0);

    if (ch >= 1 && ch <= 4)
    {
      printf("Enter a and b where a + ib is the first complex number.");
      printf("\na = ");
      scanf("%f", &a.real);
      printf("b = ");
      scanf("%f", &a.img);
      printf("Enter c and d where c + id is the second complex number.");
      printf("\nc = ");
      scanf("%f", &b.real);
      printf("d = ");
      scanf("%f", &b.img);
    }
    if (ch == 1)
    {
      c.real = a.real + b.real;
      c.img = a.img + b.img;

      if (c.img >= 0)
        printf("Sum of the complex numbers = %0.2f + %0.2f i", c.real, c.img);
      else
        printf("Sum of the complex numbers = %0.2f %0.2f i", c.real, c.img);
    }
    else if (ch == 2)
    {
      c.real = a.real - b.real;
      c.img = a.img - b.img;

      if (c.img >= 0)
        printf("Difference of the complex numbers = %0.2f + %0.2f i", c.real, c.img);
      else
        printf("Difference of the complex numbers = %0.2f %0.2f i", c.real, c.img);
    }
    else if (ch == 3)
    {
      c.real = a.real*b.real - a.img*b.img;
      c.img = a.img*b.real + a.real*b.img;

      if (c.img >= 0)
        printf("Multiplication of the complex numbers = %0.2f + %0.2f i", c.real, c.img);
      else
        printf("Multiplication of the complex numbers = %0.2f %0.2f i", c.real, c.img);
    }
    else if (ch == 4)
    {
      if (b.real == 0 && b.img == 0)
        printf("Division by 0 + 0i isn't allowed.");
      else
      {
        x = a.real*b.real + a.img*b.img;
        y = a.img*b.real - a.real*b.img;
        z = b.real*b.real + b.img*b.img;

        if (fmod(x,z) == 0 && fmod(y,z) == 0)
        {
          if (y/z >= 0)
            printf("Division of the complex numbers = %0.2f + %0.2f i", x/z, y/z);
          else
            printf("Division of the complex numbers = %0.2f %0.2f i", x/z, y/z);
        }
        else if (fmod(x,z) == 0 && fmod(y,z) != 0)
        {
          if (y/z >= 0)
            printf("Division of two complex numbers = %0.2f+ %0.2f/%0.2f i", x/z, y, z);
          else
            printf("Division of two complex numbers = %0.2f %0.2f/%0.2f i", x/z, y, z);
        }
        else if (fmod(x,z) != 0 && fmod(y,z) == 0)
        {
          if (y/z >= 0)
            printf("Division of two complex numbers = %0.2f/%0.2f + %0.2f i", x, z, y/z);
          else
            printf("Division of two complex numbers = %0.2f %0.2f/%0.2f i", x, z, y/z);
        }
        else
        {
          if (y/z >= 0)
            printf("Division of two complex numbers = %0.2f/%0.2f + %0.2f/%0.2f i",x, z, y, z);
          else
            printf("Division of two complex numbers = %0.2f/%0.2f %0.2f/%0.2f i", x, z, y, z);
        }
      }
    }
    else
      printf("Invalid choice.");

    printf("\nPress any key to enter choice again...\n");
  }
}


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


