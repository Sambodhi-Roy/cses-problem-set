#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> events(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        events.push_back({a,+1});
        events.push_back({b,-1});
    }

    sort(events.begin(),events.end());

    int curr = 0;
    int maxi = 0;

    for(auto &pair: events)
    {
        curr += pair.second;
        maxi = max(maxi, curr);
    }

    cout<<maxi<<endl;

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