#include<iostream>
using namespace std;
struct stud
{
  int id;
  string s;
  float sal;
};
int main()
{
  struct stud s1[3];
  string st = "";
  float max = 0;
  for(int i =0;i<3;i++)
  {
  cout<<"Enter Id:";
  cin>>s1[i].id;
  cout<<"Enter name:";
  cin>>s1[i].s;
  cout<<"Enter salary:";
  cin>>s1[i].sal;
  if(max<s1[i].sal)
  {
    max = s1[i].sal;
    st = s1[i].s;
  }
  }
  cout<<"Maximum sal  = "<<max;
  cout<<"Name:"<<st;

  return 0;
}
