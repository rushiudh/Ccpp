#include<iostream>
using namespace std;
void function(int n){
  int i = 1, s = 1;
  while(s <= n){ // total complexity = O(squrrt(n))
    i++;
    s = s + i;
    cout<<"*";
  }

}
int main()
{
  int n = 36;
  function(n);
  return 0;
}
