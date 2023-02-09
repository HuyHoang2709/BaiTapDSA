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
        cout << "Buoc " << i << ": ";
        for(int j = 0; j < n; ++j) 
        {
            if(step[i][j] > 0) cout << step[i][j] << ' ';
        }
        cout << '\n';
    }
}

void InsertionSort(int a[], int n)
{
    step[0][0] = a[0];
    ++dem; 
    for(int i = 1; i < n; ++i)
    {
        int x = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > x)
        {
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = x;

        for(int j = 0; j <= i; ++j)
        {
            step[dem][j] = a[j];
        }
        dem++;
    }
}

int main()
{
    khoiTao();

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];

    InsertionSort(a, n);
    print(n);
    return 0;
}