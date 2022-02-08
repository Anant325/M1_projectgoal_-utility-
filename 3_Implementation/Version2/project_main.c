#include "calculator.h"
#include <math.h>

struct complex
{
  int real, img;
}; 
int main()
{  
    int ip,selc,sip,sel=0;
    float n1,n2;
    int ch;
    float  x, y, z;
    struct complex a, b, c;
     int fig_code;
    float side, base, length, breadth, height, area, radius;
    int che,q;
 float res=0;
   
 
    while(1)
    {
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
     if(ip==5)
                                                                                                                 break;
    if(ip >=1 && ip <=2)
        {
                                                                                                                 
        if(ip==1)
    {
      printf("You have Selected Standard Mode\n")  ;
      printf("*****************************************************************************\n");
      printf("You Selected Arithmatic Calculator\n");
                                                                                              while(1)
                                                                                             {
       
                                                                                                        
                                                                                                         printf("1. Addition\n");
                                                                                                         printf("2. Subtraction\n");
                                                                                                         printf("3. Multiplication\n");
                                                                                                         printf("4. Division\n");
                                                                                                         printf("5. Exit\n\n");
                                                                                                         printf("Enter Your Choice(1-5): ");
                                                                                                         scanf("%d", &sel);
                                                                                                                 if(sel==5)
                                                                                                                 break;
                                                                                                              if(sel >=1 && sel <=4)
                                                                                                              {
                                                                                                       printf("Enter number 1\n");
                                                                                                         scanf("%f",&n1);
                                                                                                         printf("Enter number 2\n");
                                                                                                         scanf("%f",&n2); 
                                                                                                              }
                                                                                                                   
                                                                                                                   if ( sel==1)
                                                                                                                   {
                                                                                                                       add(n1,n2);
                                                                                                                   }
                                                                                                                    else if (sel==2)
                                                                                                                    {
                                                                                                                        sub(n1,n2);
                                                                                                                    }
                                                                                                                    else if(sel ==3)
                                                                                                                    {
                                                                                                                      multi(n1,n2);  
                                                                                                                    }
                                                                                                                     else if(sel==4)
                                                                                                                     {
                                                                                                                        divi(n1,n2);  
                                                                                                                     }
                                                                                                                     else
                                                                                                                    {
                                                                                                                     printf("Invalid choice.\n");
                                                                                                                     printf("\nPress any key to enter choice again...\n");
                                                                                                                    } 
                                                                                                                        
                                                                                                                        
                                                                                                                            
                                                                                                }
    }
    else if(ip==2)
    {
        printf("You have Selected Sintific Mode\n")  ;
                                                  printf("**************************************************************\n");
                                                                         while(1)
                                                                    {
                                                                              printf("1. Arithmatic calculator\n");
                                                                              printf("2. Complex Calculator\n");
                                                                              printf("3. Area of Figures\n");
                                                                              printf("4. Volume of Figures\n");
                                                                              printf("5. Exit\n");
                                                                               scanf("%d", &sip);
                                                                               if(sip==5)
                                                                               {
                                                                                   break;
                                                                               }
                                                                                                                                                      
                                                                                  if(sip==1){
                                                                                  printf("You Selected Arithmatic Calculator\n");
                                                                                              while(1)
                                                                                             {
       
                                                                                                        
                                                                                                         printf("1. Addition\n");
                                                                                                         printf("2. Subtraction\n");
                                                                                                         printf("3. Multiplication\n");
                                                                                                         printf("4. Division\n");
                                                                                                         printf("5. Exit\n\n");
                                                                                                         printf("Enter Your Choice(1-5): ");
                                                                                                         scanf("%d", &selc);
                                                                                                                 if(selc==5)
                                                                                                                 break;
                                                                                                              if(selc >=1 && selc <=4)
                                                                                                              {
                                                                                                       printf("Enter number 1\n");
                                                                                                         scanf("%f",&n1);
                                                                                                         printf("Enter number 2\n");
                                                                                                         scanf("%f",&n2); 
                                                                                                              }
                                                                                                                   
                                                                                                                   if ( selc==1)
                                                                                                                   {
                                                                                                                       add(n1,n2);
                                                                                                                   }
                                                                                                                    else if (selc==2)
                                                                                                                    {
                                                                                                                        sub(n1,n2);
                                                                                                                    }
                                                                                                                    else if(selc ==3)
                                                                                                                    {
                                                                                                                      multi(n1,n2);  
                                                                                                                    }
                                                                                                                     else if(selc==4)
                                                                                                                     {
                                                                                                                        divi(n1,n2);  
                                                                                                                     }
                                                                                                                     else
                                                                                                                    {
                                                                                                                     printf("Invalid choice.\n");
                                                                                                                     printf("\nPress any key to enter choice again...\n");
                                                                                                                    } 
                                                                                                                        
                                                                                                                        
                                                                                                                            
                                                                                                }
                                                                                  }
                                                                                             /*   
                                                                                                else if(sip==2)
                                                                                                {
          printf("You Selected Complex Calculator\n");
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
                break;

                    if (ch >= 1 && ch <= 4)
                    {
                                    printf("Enter a and b where a + ib is the first complex number.");
                                    printf("\na = ");
                                    scanf("%d", &a.real);
                                    printf("b = ");
                                    scanf("%d", &a.img);
                                    printf("Enter c and d where c + id is the second complex number.");
                                    printf("\nc = ");
                                    scanf("%d", &b.real);
                                    printf("d = ");
                                    scanf("%d", &b.img);
                   }
                                   if (ch == 1)
                               {
                                     c.real = a.real + b.real;
                                     c.img = a.img + b.img;

                                        if (c.img >= 0)
                                        printf("Sum of the complex numbers = %d + %d i", c.real, c.img);
                                        else
                                        printf("Sum of the complex numbers = %d %d i", c.real, c.img);
                                }
                                   else if (ch == 2)
                                {
                                     c.real = a.real - b.real;
                                     c.img = a.img - b.img;

                                         if (c.img >= 0)
                                          printf("Difference of the complex numbers = %d + %d i", c.real, c.img);
                                         else
                                          printf("Difference of the complex numbers = %d %d i", c.real, c.img);
                                }
                                else if (ch == 3)
                                {
                               c.real = a.real*b.real - a.img*b.img;
                               c.img = a.img*b.real + a.real*b.img;

                                         if (c.img >= 0)
                                         printf("Multiplication of the complex numbers = %d + %d i", c.real, c.img);
                                         else
                                          printf("Multiplication of the complex numbers = %d %d i", c.real, c.img);
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

                                if (x%z == 0 && y%z == 0)
                                {
                                if (y/z >= 0)
                                printf("Division of the complex numbers = %d + %d i", x/z, y/z);
                                else
                                printf("Division of the complex numbers = %d %d i", x/z, y/z);
                                }
                                else if (x%z == 0 && y%z != 0)
                                {
                                if (y/z >= 0)
                                printf("Division of two complex numbers = %d+ %d/%d i", x/z, y, z);
                                else
                                printf("Division of two complex numbers = %d %d/%d i", x/z, y, z);
                                }
                                else if (x%z != 0 && y%z == 0)
                                {
                                if (y/z >= 0)
                                printf("Division of two complex numbers = %d/%d + %d i", x, z, y/z);
                                else
                                printf("Division of two complex numbers = %d %d/%d i", x, z, y/z);
                                }
                                else
                                 {
                                  if (y/z >= 0)
                                   printf("Division of two complex numbers = %d/%d + %d/%d i",x, z, y, z);
                                  else
                                   printf("Division of two complex numbers = %d/%d %d/%d i", x, z, y, z);
                                 }
                               }
                               }
                              else
                             printf("Invalid choice.");
                             printf("\nPress any key to enter choice again...\n");
                       }
                                                                                               }*/
                       
                       else if(sip==3)
                       {
                 
                 printf("You Selected Area of Figures\n");
                   while(1)
  {
    printf("-------------------------\n");
    printf(" 1. Circle\n");
    printf(" 2. Rectangle\n");
    printf(" 3. Triangle\n");
    printf(" 4. Square\n");
    printf(" 5. Exit\n");
    printf("-------------------------\n");
    printf("Enter the Figure code\n");
    scanf("%d", &fig_code);
    if (fig_code==5)
    {
        break;
    }
    if(fig_code==1)
    {
        printf("Enter the radius\n");
        scanf("%f", &radius);
        area_circle(radius);
    }
        
    else if (fig_code==2)
    {
        printf("Enter the breadth and length\n");
        scanf("%f %f", &breadth, &length);
        area_rectangle(breadth,length);
    }
        
    else if(fig_code==3)
    {
        printf("Enter the base and height\n");
        scanf("%f %f", &base, &height);
        area_triangle(base,height);
    }
        else if(fig_code==4)
        {
        printf("Enter the side\n");
        scanf("%f", &side);
        area_square(side);
        }
        else 
        {
            printf("Invalid choice.\n");
         printf("\nPress any key to enter choice again...\n");
        }
    }
                       }
    
     else if(ip==4)
     {
      printf("You Selected Volume of figure\n");
    
        while(1)
 {
  printf("Select the shape for calculate volume\n");
  printf("Press 1 for select CUBE\n");
  printf("Press 2 for select CUBOID\n");
  printf("Press 3 for select CYLINDER\n");
  printf("Press 4 for select SPHERE\n");
  printf("Press 5 for select CONE\n");
  printf("Press 6 for exit\n");
  scanf("%d",&che);
   if(che==6)
   {
       break;
   }
   if(che==1)
   {
      res=cube();
   }
   else if(che==2)
   {
       res=cuboid();
   }
   else if(che==3)
   {
     res=cylender() ; 
   }
   else if(che==4)
   {
       res=sphere();
   }
   else if (che ==5)
   {
       res=cone();
   }
   
   else 
   {
       printf("Invalid choice.\n");
         printf("\nPress any key to enter choice again...\n");  
   }
      
  if(che>=1 && che<=5)
  {
   display(res);
  } 
 }
     }
     
     
                                                                                                
                                                                                                
                                                                                                
                                                                                

                                                                                
                                                                    }
    }
    
    else {
        printf("Wronng Choice\n");   
    }
    }
 
    }
        
    
     
return 0;
}