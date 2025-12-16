#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin>>n;
    vector<int> sticks(n);
    for(auto &x: sticks)
    {
        cin>>x;
    }

    sort(sticks.begin(), sticks.end());

    ll median = sticks[n/2];

    ll ans = 0;
    for(int i=0;i<n;i++)
    {
        ans += abs(sticks[i] - median);
    }

    cout<<ans<<endl;
}

int main() {
    fastio;

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}