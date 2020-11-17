#include <iostream>
#include <string>
#include<unordered_set>
using namespace std;

void findAllSubstring(string X, string Y)
{
	int m, n;
	if ((m = Y.length()) > (n = X.length()))
		return;
    unordered_multiset<char> win;
    unordered_multiset<char> set;
	for (int i = 0; i < m; i++)
		set.insert(Y[i]);

	for (int i = 0; i < n; i++)
	{
		if (i < m)
			win.insert(X[i]);

		else
		{
      	if (win == set)
			{
				cout << "Substring " << X.substr(i - m, m) <<
					" present at index " << i - m << '\n';
			}
	auto itr = win.find(X[i - m]);
			if (itr != win.end())
				win.erase(itr);
			win.insert(X[i]);
		}
	}
	if (win == set)
	{
		cout << "Substring " << X.substr(n - m, m) <<" present at index " << n - m << '\n';
	}
}

int main()
{
	string X = "XYYZXZYZXXYZ";
	string Y = "XYZ";
	findAllSubstring(X, Y);
	return 0;
}
