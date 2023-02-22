#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[15];
vector<int> ans;
int tong;
int OK;

void init()
{
    tong = 0;
    OK = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}

void in()
{
    cout << '[';
    for(int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i];
        if(i != ans.size() - 1) cout << ' ';
    }
    cout << "] ";
}

void Try(int i)
{
    for(int j = i+1; j <= n; ++j)
    {
        if(tong + a[j] == k) 
        {
            OK = 1;
            ans.push_back(a[j]);
            in();
            ans.pop_back();
        }
        else if(tong + a[j] > k) continue;
        else 
        {
            tong += a[j];
            ans.push_back(a[j]);
            Try(j);
            tong -= a[j];
            ans.pop_back();
        }
    }

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        init();
        if(k < a[0]) cout << -1;
        else Try(0);
        if(!OK) cout << -1;
        cout << '\n';
    }
    return 0;
}