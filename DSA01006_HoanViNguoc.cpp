#include <iostream>

using namespace std;

int P[20];
int n;
int OK;

void Init()
{
    OK = 0;
    cin >> n;
    for(int i = 1; i < 20; ++i) P[i] = n - i + 1;
}

void print()
{
    for(int i = 1; i <= n; ++i) cout << P[i];
    cout << ' ';
}

void Generation()
{
    int i = n-1;
    while(i > 0 && P[i] < P[i+1]) --i;
    if(i == 0) OK = 1;
    else
    {
        int j = n;
        while(j > i && P[i] < P[j]) --j;
        swap(P[i], P[j]);
        
        int l = i+1;
        int r = n;
        while(l < r)
        {
            swap(P[l], P[r]);
            ++l, --r;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        Init();
        while(!OK)
        {
            print();
            Generation();
        }
        cout << '\n';
    }
    return 0;
}