#include <bits/stdc++.h>

using namespace std;

set<int> s;
vector<int> v;
int n, k;
int OK;
int a[25];
int vsize;

void init()
{
	OK = 0;
	cin >> n >> k;
	for(int i = 1; i <= k; ++i) a[i] = i;
	
	int x;
	for(int i = 1; i <= n; ++i) 
	{
		cin >> x;
		s.insert(x);
	}
	
	for(auto i : s) v.push_back(i);
	vsize = v.size();
}

void in()
{
	for(int i = 1; i <= k; ++i) cout << v[a[i] - 1] << ' ';
	cout << '\n';
}

void sinh()
{
	int i = k;
	while(a[i] == vsize - k + i && i > 0) --i;
	if(i == 0) OK = 1;
	else
	{
		++a[i];
		for(int j = i+1; j <= k; ++j) a[j] = a[j-1] + 1;
	}
}

int main()
{
	init();
	while(!OK)
	{
		in();
		sinh();
	}
	return 0;
}
