#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> times(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        times[i]= {a,b};
    }

    sort(times.begin(), times.end(), [](const pair<int,int> &a, const pair<int,int> &b){
        if(a.second==b.second)
        {
            return a.first<b.first;
        }

        return a.second<b.second;
    });

    int count = 1;
    int lastEnd = times[0].second;

    for(int i=1;i<n;i++)
    {
        if(lastEnd<= times[i].first)
        {
            count++;
            lastEnd = times[i].second;
        }
    }

    cout<<count<<endl;
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