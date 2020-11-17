#include<stdio.h>
int main()
{
  int c[] = {5,0,3,4,5};
  int j,*q = c;
  for(j=0;j<*q;j++)
  {
    printf("%d",*c);
    ++q;
  }
}
