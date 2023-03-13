#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int test;
		string s;
		cin >> test;
		cin.ignore();
		cin >> s;
		
		bool check = next_permutation(s.begin(), s.end());
		cout << test << ' ';
		if(check) cout << s;
		else cout << "BIGGEST";
		cout << '\n';
	}
	return 0;
}
