#include <bits/stdc++.h>

using namespace std;

// Hàm đếm số cặp tương ứng cho từng phần tử x
int count(int x, int Y[], int n, int NoOfY[])
{
    // Nếu x = 0 thì không có cặp nào để x^y > y^x
    if (x == 0) return 0;

    // Nếu x = 1, thì số cặp bằng số các số 0 trong tập Y[]
    if (x == 1)
        return NoOfY[0];

    // Tìm số các số trong Y[] mà y > x (vì y > x thì x^y > y^x)
    int* idx = upper_bound(Y, Y + n, x);
    int ans = (Y + n) - idx;

    // Ở đây là x > 1. Ta tăng số cặp đếm được nếu y = 0 hoặc y = 1
    ans += (NoOfY[0] + NoOfY[1]);

    // Giảm số cặp đếm được với x = 2 và y = 3 || 4
    if (x == 2) ans -= (NoOfY[3] + NoOfY[4]);

    // Tăng số cặp đếm được với x = 3 và y = 2
    if (x == 3) ans += NoOfY[2];

    return ans;
}

// Hàm đếm tổng số cặp
int countPairs(int X[], int Y[], int m, int n)
{
    // Đếm số các số y trong tập Y[] mà y < 5
    int NoOfY[5] = {};
    for (int i = 0; i < n; i++)
    {
        if (Y[i] < 5) ++NoOfY[Y[i]];
    }

    // Sắp xếp mảng Y[] để sử dụng được upper_bound
    sort(Y, Y + n);

    // Khởi tạo kết quả
    int totalPairs = 0; 

    // Lấy từng phần tử trong X[] và tìm số cặp tương ứng với nó
    for (int i = 0; i < m; i++) totalPairs += count(X[i], Y, n, NoOfY);

    return totalPairs;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, n;
        cin >> m >> n;
        int X[m], Y[n];

        for(int i = 0; i < m; ++i) cin >> X[i];
        for(int i = 0; i < n; ++i) cin >> Y[i];

        cout << countPairs(X, Y, m, n) << '\n';
    }
    return 0;
}
