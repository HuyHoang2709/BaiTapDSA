#include <bits/stdc++.h>

using namespace std;

int dem;

void SelectionSort(int a[], int n)
{
    for(int i = 0; i < n-1; ++i)
    {
        int min = i;
        int check = 0;
        for(int j = i+1; j < n; ++j)
        {
            if(a[min] > a[j]) 
            {
                min = j;
                check = 1;
            }
        }
        swap(a[min], a[i]);
        if(check) ++dem;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        dem = 0;

        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i) cin >> a[i];

        SelectionSort(a, n);
        cout << dem << '\n';
    }
    return 0;
}