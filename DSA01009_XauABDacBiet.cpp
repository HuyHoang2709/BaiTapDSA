#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[50];
int idx = 1;
char res[100][100];

bool check()
{
	int cnt = 0;
	for(int i = 1; i <= n; ++i)
	{
		if(a[i] == 0) ++cnt;
		else
		{
			if(cnt == k) return true;
			else cnt = 0;
		}
	}
	return cnt == k;
}

void in()
{
	cout << idx-1 << '\n';
	for(int i = 1; i < idx; ++i)
	{
		for(int j = 1; j <= n; ++j) cout << res[i][j];
		cout << '\n';
	}
}

void result()
{
	if(check())
	{
		for(int i = 1; i <= n; ++i) res[idx][i] = 'A' + a[i];
		++idx;
	}
}

void Try(int i)
{
	for(int j = 0; j <= 1; ++j)
	{
		a[i] = j;
		if(i == n) result();
		else Try(i+1);
	}
}

int main()
{
	cin >> n >> k;
	Try(1);
	in();
	return 0;
}
