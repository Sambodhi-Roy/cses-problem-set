#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve()
{
    int x,n;
    cin>>x>>n;

    set<int> positions;
    multiset<int> lengths;

    positions.insert(0);
    positions.insert(x);
    lengths.insert(x);

    while(n--)
    {
        int ind;
        cin>>ind;

        // Lower Bound -> value >= x
        // If ind = 2, then lower-bound (8>=2):
        // 0-----2------------------8
        // *it = 8
        // *prev = 0

        auto it = positions.lower_bound(ind);
        int right = *it;
        int left = *prev(it);

        lengths.erase(lengths.find(right-left));

        lengths.insert(ind-left);
        lengths.insert(right-ind);

        positions.insert(ind);

        cout<< *lengths.rbegin()<<" ";
    }
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