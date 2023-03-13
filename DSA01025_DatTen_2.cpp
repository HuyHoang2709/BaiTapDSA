#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[20];
int OK;

void init()
{
	OK = 0;
	cin >> n >> k;
	for(int i = 1; i <= k; ++i) a[i] = i;
}

void in()
{
	for(int i = 1; i <= k; ++i) printf("%c", 'A' + a[i] - 1);
	cout << '\n';
}

void sinh()
{
	int i = k;
	while(a[i] == n - k + i && i > 0) --i;
	if(i == 0) OK = 1;
	else
	{
		++a[i];
		for(int j = i+1; j <= k; ++j) a[j] = a[j-1] + 1;
	}
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
