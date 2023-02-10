#include <bits/stdc++.h>

using namespace std;

int binarySearch(int a[], int l, int r, int x)
{
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x) return 1;
        else if(a[mid] > x) r--;
        else l++;
    }
    return -1;
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
        cout << binarySearch(a, 0, n-1, x) << '\n';
    }
    return 0;
}