#include <bits/stdc++.h>
using namespace std;

#define int long long

inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1)
            x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

const int N = 200005;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr)
    {
        cin >> x;
    }

    int moves = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            int req = arr[i - 1] - arr[i];
            moves += req;
            arr[i] += req;
        }
    }

    cout << moves << endl;
    return;
}

int32_t main()
{

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}