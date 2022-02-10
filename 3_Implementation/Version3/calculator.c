

#include"calculator.h"


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


