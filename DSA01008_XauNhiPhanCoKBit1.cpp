#include <iostream>

using namespace std;

int n, k;
int a[20];
int OK;

void init()
{
    OK = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; ++i) a[i] = 0;
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

int check()
{
    int dem = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(a[i] == 1) ++dem;
        if(dem > k) return 0;
    }
    return dem == k;
}

void in()
{
    if(check()) 
    {
        for(int i = 1; i <= n; ++i) cout << a[i];
        cout << '\n';
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        init();
        while(!OK)
        {
            sinh();
            in();
        }
    }
    return 0;
}