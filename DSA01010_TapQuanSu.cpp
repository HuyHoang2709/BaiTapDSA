#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[45];
int b[45];
int OK;

void init()
{
	OK = 0;
	cin >> n >> k;
	for(int i = 1; i <= n; ++i) b[i] = 0;
	for(int i = 1; i <= k; ++i) 
	{
		cin >> a[i];
		++b[a[i]];
	}
}

void sinh()
{
	int i = k;
	while(a[i] == n - k + i) --i;
	if(i == 0) OK = 1;
	else 
	{
		++a[i];
		for(int j = i+1; j <= k; ++j) a[j] = a[j-1] + 1;
	}
}

int dem()
{
	if(!OK)
	{
		int res = 0;
		for(int i = 1; i <= k; ++i) 
		{
			if(b[a[i]] == 0) ++res;
		}
		return res;
	}
	return k;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		init();
		sinh();
		cout << dem() << '\n';
	}
}
