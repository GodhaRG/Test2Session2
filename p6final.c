#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("Enter a string\n");
  scanf("%s",a);
}
int str_substr(char *string, char *substring)
{
  int index=0,i,j;
  printf("enter the substring\n");
  scanf("%s",substring);
  int n=strlen(string);
  int b=strlen(substring);
 for(i=0;i<string[i]!='\0';i++)
    {
      j=0 ;
      while(substring[j]!='\0')
      {
        if(string[i]==substring[j])
        {
          index=index+1; 
        }
        j++;
      }
      if (index== b) 
        return index;
    }
}
void output(char *string, char *substring, int index)
{
  printf("The substring %s of string %s is %d\n",substring,string,index);
}
int main()
{
  int index;
  char a[20],b[20];
  input_string(a);
  index=str_substr(a,b);
  output(a,b,index);
  return 0;
}