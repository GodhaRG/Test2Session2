#include <stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  return n;
}

void init_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    {
    a[i] = i+1;
      }
}

void ets(int n, int a[n])
{
  int i,j;
for(int i=1;i<n;i++)
    {
    if(a[i]==0)
      continue;
      for(j=a[i]+1;j<=n;j++)
        {
          if(j%a[i]==0)
            a[j-1]=0;
        }
  }
}


void display(int n, int a[n])
{ 
  printf("the prime numbers are\n");
  for(int i=1;i<n;i++)
    {
      if(a[i]!=0)
      {
    printf(" %d  ",a[i]);
}
      }
  }
int main()
{
  int n;
  n=input();
  int a[n];
  init_array(n,a);
  ets(n,a);
  display(n,a);
  return 0;
}
