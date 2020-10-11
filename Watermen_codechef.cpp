#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        int sum =0;
        cin>>n;
        int x;
        for(int i = 0;i<n;++i)
        {
            cin>>x;  
            sum = sum + x;
        }
        if(sum >=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
return 0;
}
