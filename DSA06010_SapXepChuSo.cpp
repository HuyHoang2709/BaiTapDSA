#include <bits/stdc++.h>

using namespace std;

set<int> temp;

void tachChuSo(int n)
{
    while(n > 0)
    {
        temp.insert(n % 10);
        n /= 10;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        temp.clear();
        int n;
        cin >> n;
        int x;
        while(n--)
        {
            cin >> x;
            tachChuSo(x);
        }
        for(auto it : temp) cout << it << ' ';
        cout << '\n';
    }
    return 0;
}