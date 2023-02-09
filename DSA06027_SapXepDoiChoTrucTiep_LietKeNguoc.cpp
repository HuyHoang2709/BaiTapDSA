#include <bits/stdc++.h>

using namespace std;

int step[100][100];
int dem;

void khoiTao()
{
    dem = 0;
    for(int i = 0; i < 100; ++i)
    {
        for(int j = 0; j < 100; ++j) step[i][j] = 0;
    }
}

void print(int n)
{
    for(int i = dem-1; i >= 0; i--)
    {
        cout << "Buoc " << (i+1) << ": ";
        for(int j = 0; j < n; ++j) cout << step[i][j] << ' ';
        cout << '\n';
    }
}

void InterchangeSort(int a[], int n)
{
    for(int i = 0; i < n-1; ++i)
    {
        for(int j = i+1; j < n; ++j)
        {
            if(a[i] > a[j]) 
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        for(int j = 0; j < n; ++j)
        {
            step[dem][j] = a[j];
        }
        dem++;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        khoiTao();

        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];
        
        InterchangeSort(a, n);
        print(n);
        return 0;
    }
}