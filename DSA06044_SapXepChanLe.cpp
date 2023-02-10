#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    vector<int> chan;
    vector<int> le;

    for(int i = 1; i <= n; ++i) 
    {
        cin >> x;
        if(i % 2 == 0) chan.push_back(x);
        else le.push_back(x);
    }

    sort(chan.begin(), chan.end(), greater<int>());
    sort(le.begin(), le.end());

    for(int i = 0; i < n/2; ++i)
    {
        cout << le[i] << ' ' << chan[i] << ' ';
    }
    if(n % 2 == 1) cout << le[n/2];
    return 0;
}