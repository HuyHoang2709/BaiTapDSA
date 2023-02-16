#include <iostream>

using namespace std;

int n, k;
int a[1005];

void init()
{
    cin >> n >> k;
    for(int i = 1; i <= k; ++i) cin >> a[i]; 
}

void sinh()
{
    int i = k;
    while(a[i] == n-k+i) --i;
    if(i == 0)
    {
        for(int j = 1; j <= k; ++j) a[j] = j;
    }
    else
    {
        ++a[i];
        for(int j = i+1; j <= k; ++j) a[j] = a[j-1] + 1;
    }
}

void print()
{
    for(int i = 1; i <= k; ++i) cout << a[i] << ' ';
    cout << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        init();
        sinh();
        print();
    }
    return 0;
}