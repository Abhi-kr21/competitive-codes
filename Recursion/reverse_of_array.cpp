#include <bits/stdc++.h>
using namespace std;
void recur(int i, int a[], int n)
{
    if (i >= n / 2)
        return;
    swap(a[i], a[n - i - 1]);
    recur(i + 1, a, n);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    recur(0, a, n);
    for (auto it : a)
    {
        cout << it;
    }
    return 0;
}
