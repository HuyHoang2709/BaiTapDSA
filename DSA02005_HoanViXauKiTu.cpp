#include <bits/stdc++.h>

using namespace std;

string s;
int n;
char save[15];
int ans[15];
int f[15];

void init()
{
    cin >> s;
    n = s.length();
    for(int i = 1; i <= n; ++i) 
    {
        save[i] = s[i-1];
        f[i] = 0;
    }
}

void in()
{
    for(int i = 1; i <= n; ++i) cout << save[ans[i]];
    cout << ' ';
}

void Try(int i)
{
    for(int j = 1; j <= n; ++j)
    {
        if(f[j] == 0)
        {
            ans[i] = j;
            f[j] = 1;

            if(i == n) in();
            else Try(i+1);

            f[j] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        init();
        Try(1);
        cout << '\n';
    }
    return 0;
}