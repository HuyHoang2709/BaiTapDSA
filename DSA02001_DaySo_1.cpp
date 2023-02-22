#include <bits/stdc++.h>

using namespace std;

int n;
int a[15];
int b[15];

void init()
{
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
}

void in()
{
    cout << "[";
    for(int i = 1; i <= n; ++i)
    {
        cout << a[i];
        if(i != n) cout << ' ';
    }
    cout << "]\n";
}

void update()
{
    for(int i = 1; i <= n-1; ++i) b[i] = a[i] + a[i+1];
    --n;
    for(int i = 1; i <= n; ++i) a[i] = b[i];
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        init();
        while(n)
        {
            in();
            update();
        }
    }
    return 0;
}