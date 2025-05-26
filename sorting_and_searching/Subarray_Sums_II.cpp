#include <bits/stdc++.h>
using namespace std;

#define ll long long

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
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (auto &num : arr)
    {
        cin >> num;
    }

    ll count = 0;
    ll prefixSum = 0;
    map<ll, int> mpp;

    mpp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        ll remmaining = prefixSum - x;
        count += mpp[remmaining];
        mpp[prefixSum]++;
    }

    cout << count << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}