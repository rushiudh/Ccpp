#include<iostream>
#include<limits>
using namespace std;
int main()
{
cout << numeric_limits<float>:: is_exact;
cout << numeric_limits<double> ::is_exact;
cout << numeric_limits<long int>:: is_exact;
cout << numeric_limits<unsigned char>::is_exact;
}
