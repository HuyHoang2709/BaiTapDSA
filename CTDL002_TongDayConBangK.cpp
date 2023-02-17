#include <iostream>
#include <algorithm>

using namespace std;

int OK;
int n, k;
int a[30];
int b[30];
int tong;
int dem;

void init()
{
    OK = 0;
    dem = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
    {
        a[i] = 0;
        cin >> b[i];
    }
    sort(a + 1, a + n + 1);
}

void sum()
{
    tong = 0;
    for(int i = 1; i <= n; ++i)
    {
        tong += b[i] * a[i];
    }
}

void print()
{
    sum();
    if(tong == k)
    {
        ++dem;
        for(int i = 1; i <= n; ++i) 
        {
            if(a[i] == 1) cout << b[i] << ' ';
        }
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
    init();
    while(!OK)
    {
        print();
        sinh();
    }
    cout << dem;
    return 0;
}