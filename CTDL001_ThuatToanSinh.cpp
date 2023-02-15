#include <bits/stdc++.h>

using namespace std;

int a[30];
int n;
int OK;

void khoiTao()
{
    OK = 0;
    for(int i = 0; i < 30; ++i) a[i] = 0;
    cin >> n;
}

int thuanNghich()
{
    int l = 1;
    int r = n;
    while(l <= r)
    {
        if(a[l] != a[r]) return 0;
        ++l; --r;
    }
    return 1;
}

void in()
{
    if(thuanNghich())
    {
        for(int i = 1; i <= n; ++i) cout << a[i] << ' ';
        cout << '\n';
    }
}

void sinh()
{
    int i = n;
    while(a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if(i == 0) OK = 1;
    else a[i] = 1;
}

int main()
{
    khoiTao();
    while(!OK)
    {
        in();
        sinh();
    }
    return 0;
}