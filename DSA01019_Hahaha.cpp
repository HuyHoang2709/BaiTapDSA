#include <bits/stdc++.h>

using namespace std;

int n;
int a[20];
int OK;

void init()
{
	OK = 0;
	cin >> n;
	a[1] = 1;
	for(int i = 2; i <= n; ++i) a[i] = 0;
}

bool check()
{
	if(a[n] != 0) return false; 
	for(int i = 1; i <= n-1; ++i)
	{
		if(a[i] == 1 && a[i] == a[i+1]) return false;
	}
	return true;
}

void in()
{
	if(check()) 
	{
		for(int i = 1; i <= n; ++i)
		{
			if(a[i] == 0) cout << 'A';
			else cout << 'H';
		}
		cout << '\n';
	}
}

void sinh()
{	
	int i = n;
	while(a[i] == 1) 
	{
		a[i] = 0;
		--i;
	}
	if(i == 0) OK = 1;
	else a[i] = 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		init();
		while(!OK)
		{
			in();
			sinh();
		}
	}
	return 0;
}
