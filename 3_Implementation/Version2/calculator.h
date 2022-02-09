/**
 * @brief  to perdorm basic calculation
 * 
 * @return int 
 */
#ifndef CALCULATOR_H_

#define CALCULATOR_H_ 

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



#endif