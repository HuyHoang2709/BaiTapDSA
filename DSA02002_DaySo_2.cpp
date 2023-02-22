#include <bits/stdc++.h>

using namespace std;

int n;
int a[15][15] = {};

void init()
{
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[1][i];
}

void update()
{
    for(int i = 2; i <= n; ++i)
    {
        for(int j = 1; j <= n-i+1; ++j)
        {
            a[i][j] = a[i-1][j] + a[i-1][j+1];
        }
    }
}

void in()
{
    for(int i = n; i >= 1; --i)
    {
        cout << '[';
        for(int j = 1; j <= n-i+1; ++j)
        {
            cout << a[i][j];
            if(j != n-i+1) cout << ' ';
        }
        cout << "] ";
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        init();
        update();
        in();
        cout << '\n';
    }
    return 0;
}