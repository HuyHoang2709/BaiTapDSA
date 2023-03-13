#include <bits/stdc++.h>

using namespace std;

int money[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int dem(int n)
{
	int cnt = 0;
	for(int i = 9; i >= 0; --i)
	{
		while(money[i] <= n) 
		{
			n -= money[i];
			++cnt;
		}
	}
	return cnt;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << dem(n) << '\n';
	}
	return 0;
}
