#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[45];
int b[45];
int dem;
int OK;

void init()
{
    dem = 0;
    OK = 0;
    cin >> n >> k;
    for(int i = 1; i <= k; ++i) 
    {
        cin >>  a[i];
        b[i] = a[i];
    }
}

void sinh()
{
    int i = k;
    while(b[i] == n - k + i) --i;
    if(i == 0) 
    {
        dem = k;
        OK = 1;
    }
    else 
    {
        ++b[i];
        for(int j = i+1; j <= k; ++j) b[j] = b[j-1] + 1; 
    }
}

void count()
{
    if(!OK) 
    {
        set<int> s;
        for(int i = 1; i <= k; ++i) 
        {
            s.insert(a[i]);
            s.insert(b[i]);
        }
        dem = s.size() - k;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        init();
        sinh();
        count();
        cout << dem << '\n';
    }
    return 0;
}