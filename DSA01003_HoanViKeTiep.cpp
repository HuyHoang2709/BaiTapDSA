#include <iostream>

using namespace std;

int n;
int a[1005];

void init()
{
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
}

void sinh()
{
    int i = n - 1;
    while(a[i] > a[i+1]) --i;
    if(i == 0)
    {
        for(int i = 1; i <= n; ++i) a[i] = i;
    }
    else
    {
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while(l < r)
        {
            swap(a[l], a[r]);
            ++l; --r;
        }
    }
}

void print()
{
    for(int i = 1; i <= n; ++i) cout << a[i] << ' ';
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