#include <bits/stdc++.h>

using namespace std;

int dem;
int arr[105];

void khoiTao()
{
    dem = 0;
    for(int i = 0; i < 105; ++i) arr[i] = 0;
}

void demCap(int n, int k)
{
    sort(arr, arr + n);
    for(int i = 0; i < n-1; ++i)
    {
        int x = k - arr[i];
        int lower = lower_bound(arr + i + 1, arr + n, x) - arr;
        int upper = upper_bound(arr + i + 1, arr + n, x) - arr;
        dem += upper - lower;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        khoiTao();
        
        int n, k;
        cin >> n >> k;
        for(int i = 0; i < n; ++i) cin >> arr[i];

        demCap(n, k);
        cout << dem << '\n';
    }
    return 0;
}