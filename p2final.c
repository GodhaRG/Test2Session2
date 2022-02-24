#include<stdio.h>
void input_triangle(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3)
{
   printf(" enter the  first points \n");
  scanf("%f %f",x1,y1);
  printf("enter the second points\n");
  scanf("%f %f",x2,y2);
   printf(" enter the  third points \n");
  scanf("%f %f",x3,y3);
}
int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{
 float area;
  area =0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  if(area==0)
  {
    return 1;
  }
  else
  {
    return 2;
  }
  }
void output(float x1,float y1,float x2,float y2,float x3,float y3,int istriangle )
{
  if(istriangle==1)
  {
    printf("three pionts do not form a triangle\n");
  }
  if(istriangle==2)
  {
    printf("three pionts  form a triangle\n");
  }
  
}
int main()
{
  float x1,y1,x2,y2,y3,x3;
  float area;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  area=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,area);
  return 0;
}
