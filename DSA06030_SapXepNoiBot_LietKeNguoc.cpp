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

void BubbleSort(int a[], int n)
{
    for(int i = 0; i < n; ++i)
    {
        int OK = 1;
        for(int j = 0; j < n-i-1; ++j)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                OK = 0;
            }
        }
        if(OK) break;

        for(int i = 0; i < n; ++i)
        {
            step[dem][i] = a[i];
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

        BubbleSort(a, n);
        print(n);
    }
    return 0;
}