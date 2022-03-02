#include<stdio.h>
int input()
{
  int n;
  printf("enter the term you want to find out he value of the series\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int a=0,b=1,sum;
  for (int i=1;i<n;i++)
    {
     sum=a+b;
      a=b;
      b=sum;
    }
  return a;
}
void output(int n, int f)
{
  printf("\n");
  printf("%d th term of fibonacci series is %d\n",n,f);
}
int main()
{
  int n,f;
  n=input();
  f=find_fibo(n);
  output(n,f);
  return 0;
}
