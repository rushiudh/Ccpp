#include<stdio.h>
#include<string.h>
void function(int [][3]);
int main(void)
{
  int a[3][3]  = {1,2,3,4,5,6,7,8,9};
  function(a);
  printf("%d",a[2][1]-a[1][2]);
  return 0;
}
void function(int a[][3])
{
  ++a;
  a[1][1]++;
}
