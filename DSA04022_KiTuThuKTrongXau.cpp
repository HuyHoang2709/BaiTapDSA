#include <bits/stdc++.h>

using namespace std;

long long C[30];

void sinh()
{
    C[1] = 1;
    for (int i = 2; i <= 26; ++i) C[i] = 2 * C[i - 1];
}

int word(int n, long long k)
{
    if (C[n] == k) return 65 + n - 1;
    if (C[n] < k) return word(n - 1, k - C[n]);
    else return word(n - 1, k);
}

int main()
{
    sinh();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        char c = word(n, k);
        cout << c << '\n';
    }
    return 0;
}