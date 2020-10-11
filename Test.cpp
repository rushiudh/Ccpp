#include<iostream>
using namespace std;
int main()
{
	int a,b,gcd;
	cout<<"Enter 2 Numbers :";
	cin>>a>>b;
	while(a!=b)
	{
		for(int i=0;i<=a && i<=b;i++)
			if(a%i==0 && b%i == 0)
				gcd =i;
	}
	cout<<"GCD of 2 Numbers is :\n"<<gcd;
	return 0;
}