#include <bits/stdc++.h>

using namespace std;

int n;
long long k;
long long N[55];

void sinh()
{
    N[1] = 1;
    for (int i = 2; i <= 50; ++i) N[i] = 2 * N[i - 1];
}

int number(int n, long long k)
{
    if (N[n] == k) return n;
    if (N[n] < k) return number(n - 1, k - N[n]);
    else return number(n - 1, k);
}

int main()
{
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int res = number(n, k);
        cout << res << '\n';
    }
    return 0;
}