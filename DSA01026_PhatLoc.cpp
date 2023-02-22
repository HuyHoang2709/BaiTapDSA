#include <bits/stdc++.h>

using namespace std;

int n;
int a[20];
int OK;

void init()
{
    OK = 0;
    cin >> n;
    a[1] = 8;
    a[n] = 6;
    for(int i = 2; i <= n-1; ++i) a[i] = 6;
}

int check()
{
    int cnt6 = 0;
    int cnt8 = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(a[i] == 6)
        {
            ++cnt6;
            cnt8 = 0;
        }
        else 
        {
            ++cnt8;
            cnt6 = 0;
        }
        if(cnt6 > 3 || cnt8 > 1) return 0;
    }
    return 1;
}

void in()
{
    if(check())
    {
        for(int i = 1; i <= n; ++i) cout << a[i];
        cout << '\n';
    }
}

void sinh()
{
    int i = n-1;
    while(i > 1 && a[i] == 8) 
    {
        a[i] = 6;
        --i;
    }
    if(i == 1) OK = 1;
    else a[i] = 8;
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