#include <iostream>
using namespace std;

int main() {
    int t=0,n=0,d=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>d;
    int arr1[n];
    int temp[n-d];

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<d;i++)
    {
        temp[i] = arr1[i];
    }

    for(int i=d;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    for(int i=0;i<d;i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    }
	return 0;
}
