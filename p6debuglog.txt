/* Write a program to find the index of a substring of a string.
void input_string(char *a);
int str_reverse(char *string, char *substring);
void output(char *string, char *substring, int index); */
#include<stdio.h>
#include<math.h>
int string_length(char *s)
{
  int i;
  for(i=0;s[i]!='\0';i++);
  return i;
}

int string_ncmp(char *s1,char *s2)
{
  for(int i=0; i<n && s1[i]==s2[i] && s1[i] != '\0';i++);
  return s1[i] - s2[i];
}


int string_index(char *s, char *subs)
{
  int l1=strlen(&s);
  int l2=strlen(&subs);
  if (l1 < l2)
  {
      return -1;
  }
  for(int i=0;i<l1-l2;i++)
    if (string_nscmp(s,subs))
    {
      return i;
      }
  return -1;
}
void output(char *string, char *substring, int index)
{
  printf("the index of %s in %s is %d \n",&substring,&string,index);
}
int main()
{
  char s,s1,s2,subs,index;
  int i=string_length(&s);
  string_ncmp(&s1, &s2);
  index=string_index(&s,&subs);
  output(&s,&subs,index);
  return 0;
}
