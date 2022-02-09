
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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
int area_square( float s)
{
     float area=0;
     area = s * s;
     printf("Area of a Square=%f\n", area);
}
int area_triangle(float base,float height)
{
    float area=0;
   area = 0.5 * base * height;
        printf("Area of a Triangle = %f\n", area); 
}
int area_rectangle( float breadth,float length)
{ 
    float area=0;
    area = breadth * length;
        printf("Area of a Reactangle = %f\n", area);
    
}
int area_circle(int radius)
{
    float area=0;
    area = 3.142 * radius * radius;
        printf("Area of a circle = %f\n", area);
}

 float cube()
 {
  float a;
  float V;
  printf("Enter value of side\n");
  scanf("%f",&a);
  V=a*a*a;
  return V;
 }
 float cuboid()
 {
  float l,b,h;
  float V;
  printf("Enter length,breadth & hight of cuboid\n");
  scanf("%f%f%f",&l,&b,&h);

  V=l*b*h;
  return V;
 }
 float cylender()
 {
  float r,h;
  float V;
  printf("Enter radius & hight of cylender\n");
  scanf("%f%f",&r,&h);
  V=3.14*r*r*h;
  return V;
 }
 float sphere()
 {
  float r;
  float V;
  printf("Enter radius of sphere\n");
 scanf("%f",&r);
  V=(4*3.14*r*r*r)/3;
  return V;
 }
 float cone()
 {
  float r,h;
  float V;
  printf("Enter radius & hight of cone\n");
  scanf("%f%f",&r,&h);
  V=(3.14*r*r*h)/3;
  return V;
 }
 float display(float V)
 {
  printf("Volume is = %f\n",V);
 }
int average(float a[],int n)
{
  float sum=0,avg =0;
  for(int i=0; i< n; i++)
 {
  sum = sum + a[i];
 }
  avg = sum/n;
  printf("Average is %0.2f\n", avg);
  
}
int Factorial (int k)
{
    
      int  factorial = 1;
    for(int i=1; i<=k; i++)
    {
        factorial = factorial * i;
    }
    printf("\n Factorial of %d is %d\n",k,factorial );
}

int pallindromenum(int n)
{
    int  reversed = 0, rem, original;
    original=n;
    while (n != 0) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;
    }
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
}
void BMI (int weight, float height){
    float temp = weight/ (height * height);
    printf("BMI = %f\n", temp);
    printf("\nGrade: ");
    temp < 18.5 ? printf("Under ") : temp < 25 ? printf("Normal ") : temp < 30 ? printf("Over ") : temp < 40 ? printf("Obese ") : printf("Error");
} 
int speed(int distance,int tim)
{
    int sp=0;
     sp=distance/tim;
    printf("speed is %d\n ",sp);
}

struct complex
{
  int  real, img;
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
   float an[100];
 int nol,sha=0;
 int fact;
 int numpall=0;
   int w;
  float h;
  int  distance, tim;
   
  
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
    printf("3.Extra\n");
    printf("4.Exit\n");
    
    scanf("%d",&ip);
     if(ip==4)
                                                                                                                 break;
    if(ip >=1 && ip <=3)
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
    
    else if(ip==3)
    {
          printf("You selected Extra Mode\n")  ;
     printf("*****************************************************************************\n");
      while(1)
                                                                                             {
       
                                                                                                        
                                                                                                         printf("\n1. Average \n");
                                                                                                         printf("2. Factorial\n");
                                                                                                         printf("3. Pallindrome\n");
                                                                                                         printf("4. Speed Calculator\n");
                                                                                                         printf("5. BMI\n");
                                                                                                         printf("6. EXIT\n");
                                                                                                         
                                                                                                         
                                                                                                        
                                                                                                         printf("Enter Your Choice(1-6): ");
                                                                                                         scanf("%d", &sha);
                                                                                                                 if(sha==6)
                                                                                                                 break;
                                                                                                                if ( sha==1)
                                                                                                                   { printf("You Selected Average Calculator\n");
                                                                                                                       
                                                                                                                       printf("Enter number to find average : \n");
                                                                                                                       scanf("%d", &nol);
                                                                                                                       printf("Enter numbers:\n");
 for(int i=0; i< nol; i++)
 {
  printf("a[%d] = ", i);
  scanf("%f", &an[i]);
 }
 average(an,nol);
 
 
                                                                                                                   }
                                                                                                                    else if (sha==2)
                                                                                                                    {
                                                                                                                         printf("You Selected Factorial Calculator\n");
                                                                                                                         printf(" Enter the number :\n ");
                                                                                                                         scanf("%d",&fact);
                                                                                                                         Factorial(fact);
                                                                                                                         
                                                                                                                        
                                                                                                                    }
                                                                                                                    else if(sha ==3)
                                                                                                                    {
                                                                                                                      printf("You Selected Pallindrome\n");
                                                                                                                      printf("Enter an integer: \n");
                                                                                                                       scanf("%d", &numpall);
                                                                                                                     pallindromenum (numpall);
                                                                                                                      
                                                                                                                    }
                                                                                                                     else if(sha==5)
                                                                                                                     {
                                                                                                                          printf("You Selected BMI \n");
                                                                                                                          printf("Input the weight:\n ");
       scanf("%d", &w);
       printf("Input the height in cm : \n");
       scanf("%f", &h);
       BMI(w, h);
                                                                                                                         
                                                                                                                          
                                                                                                                     }
                                                                                                                     else if (sha==4)
                                                                                                                     {
                                                                                                                       printf("You selected  Speed calculator \n");
                                                                                                                        printf("Enter Your distance in KM\n");
    scanf("%d", &distance);
    printf("Enter Your time in Min\n");
    scanf("%d", &tim);
    speed(distance,tim);
                                                                                                                     }
                                                                                                                     else
                                                                                                                    {
                                                                                                                     printf("Invalid choice.\n");
                                                                                                                     printf("\nPress any key to enter choice again...\n");
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





