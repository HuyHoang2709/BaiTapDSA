#include <bits/stdc++.h>

using namespace std;

int n, x;
int OK;
int a[105];
int c[105];

void init()
{
    OK = 0;
    cin >> n >> x;
    for(int i = 1; i <= n; ++i) 
    {
        cin >> a[i];
        c[i] = 0;
    }
}

void in(int i)
{
    cout << '[';
    for(int j = 1; j <= i; ++j)
    {
        cout << c[j];
        if(j != i) cout << ' ';
    }
    cout << ']';
}

void Try(int i, int sum)
{
    for(int j = 1; j <= n; ++j)
    {
        if(a[j] >= c[i-1] && sum + a[j] <= x)
        {
            c[i] = a[j];
            sum += a[j];
            if(sum == x) 
            {
                OK = 1;
                in(i);
            }
            else Try(i + 1, sum);
            sum -= a[j];
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        init();
        Try(1, 0);
        if(!OK) cout << -1;
        cout << '\n';
    }
    return 0;
}