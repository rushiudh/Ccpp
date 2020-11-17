#include<stdio.h>
using namespace std;
int min(int x, int y)
{
return(y<x)?y:x;
}
int main()
{
int a[] = {-5,9,8,-8,-2};
int z = a[0],n=5,i=0,c=a[0];
for(i=0;i<n;i++)
{
  c = min(a[i],c+a[i]);
  z= min(z,c);
}
printf("%d",z);
return 0;
}
