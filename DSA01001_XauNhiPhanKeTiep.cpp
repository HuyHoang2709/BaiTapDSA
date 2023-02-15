#include <bits/stdc++.h>

using namespace std;

string s;
int n;

void in()
{
    for(int i = 0; i < n; ++i) cout << s[i];
    cout << '\n';
}

void sinh()
{
    int i = n-1;
    while(s[i] == '1')
    {
        s[i] = '0';
        --i;
    }
    if(i != -1) s[i] = '1';
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        n = s.length();
        sinh();
        in();
    }
    return 0;
}