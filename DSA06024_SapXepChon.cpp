#include <bits/stdc++.h>

using namespace std;

void print(int a[], int n)
{
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';
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
        cout << "Buoc " << (i+1) << ": ";
        print(a, n);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    SelectionSort(a, n);
    return 0;
}