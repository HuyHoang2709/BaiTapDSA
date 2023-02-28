#include <iostream>

using namespace std;

int binarySearch(int a[], int n, int k)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == k) return mid + 1;
        else if (a[mid] < k) l = mid + 1;
        else r = mid - 1;
    }
    return 0;
}

void res(int pos)
{
    if (pos > 0) cout << pos;
    else cout << "NO";
    cout << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];
        res(binarySearch(a, n, k));
    }
    return 0;
}