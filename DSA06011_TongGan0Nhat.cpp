#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];

        int min = INT_MAX;
        int tong = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int temp = a[i] + a[j];
                if (min > abs(temp))
                {
                    min = abs(temp);
                    tong = temp;
                }
            }
        }
        cout << tong << '\n';
    }
    return 0;
}