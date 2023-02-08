#include <bits/stdc++.h>

using namespace std;

void sapXep(int a[], int n, int x)
{
    for(int i = 0; i < n-1; ++i)
    {
        for(int j = 0; j < n-i-1; ++j)
        {
            if(abs(x - a[j]) > abs(x - a[j+1]))
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void in(int a[], int n)
{
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];

        sapXep(a, n, x);

        in(a, n);
    }
    return 0;
}