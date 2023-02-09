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

void SelectionSort(int a[], int n)
{
    for(int i = 0; i < n-1; ++i)
    {
        int min = i;
        for(int j = i+1; j < n; ++j)
        {
            if(a[j] < a[min]) min = j;
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        for(int j = 0; j < n; ++j)
        {
            step[dem][j] = a[j];
        }
        dem++;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];

    SelectionSort(a, n);

    print(n);
    return 0;
}