#include <bits/stdc++.h>

using namespace std;

int n, k;
string tmp;
set<string> s;
string ans[15];
int cnt;
int C[15];

void init()
{
    cnt = 1;
    cin >> n >> k;
    cin.ignore();
    for(int i = 0; i < k; ++i) C[i] = 0;
    for(int i = 1; i <= n; ++i) 
    {
        cin >> tmp;
        s.insert(tmp);
    }
    for(auto i : s)
    {
        ans[cnt++] = i;
    }
}

void in()
{
    for(int i = 1; i <= k; ++i) cout << ans[C[i]] << ' ';
    cout << '\n';
}

void Try(int i)
{
    for(int j = C[i-1]+1; j <= cnt - 1 - k + i; ++j)
    {
        C[i] = j;
        if(i == k) in();
        else Try(i+1);
    }
}

int main()
{
    init();
    Try(1);
    return 0;
}