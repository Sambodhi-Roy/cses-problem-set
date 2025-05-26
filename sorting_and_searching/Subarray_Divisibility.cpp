#include <bits/stdc++.h>
using namespace std;

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
        cin >> x;

    unordered_map<long long, int> mpp;
    mpp[0] = 1;

    long long prefixSum = 0;
    long long count = 0;

    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        int mod = ((prefixSum % n) + n) % n; // For handling negative results into positive

        count += mpp[mod];
        mpp[mod]++;
    }

    cout << count << endl;
}

int32_t main()
{

    solve();

    return 0;
}