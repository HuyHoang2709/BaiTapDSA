#include <bits/stdc++.h>

using namespace std;

void print(int a[], int n)
{
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';
}

void InsertionSort(int a[], int n)
{
    cout << "Buoc 0: " << a[0] << '\n'; 
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
        cout << "Buoc " << i << ": ";
        print(a, i+1);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    InsertionSort(a, n);
    return 0;
}