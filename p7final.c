#include<stdio.h>
#include<math.h>
struct _point
{
  float x,y;
};
typedef struct _point Point;
struct _line
{
Point p1,p2;
float distance;
};
typedef struct _line Line;
Point input_point()
{
  Point p;
  printf("enter the points\n");
  scanf("%f %f",&p.x,&p.y);
  return p;
}
Line input_line()
{
  Line a;
  printf("enter the first point of line\n");
  a.p1=input_point();
   printf("enter the second point of line\n");
  a.p2=input_point();
  return a;
  }
void find_length(Line *l)
{
  l->distance=sqrt((l->p1.x-l->p2.x)*(l->p1.x-l->p2.x)+(l->p1.y-l->p2.y)*(l->p1.y-l->p2.y));
}
void output(Line l)
{
  printf("the length of line with points(%f,%f)and (%f,%f)is %f\n",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}
int main()
{
  Line l=input_line();
  find_length(&l);
  output(l);
  return 0;
}
