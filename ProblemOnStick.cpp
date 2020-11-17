#include <iostream>
#include<set>
using namespace std;

int main() {
	int T,N,high = 0;
	cin>> T;
	
	while(T--)
	{
	    cin>>N;
	    set<int> st;
	    for(int i=0;i<N;i++)
	    {
	        int x;
	        cin>>x;
	        if(x!=0)
	            st.insert(x);
	    }
	    
	    cout<<st.size()<<endl;
	}
	return 0;
}
