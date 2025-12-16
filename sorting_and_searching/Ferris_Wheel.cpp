#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> weights(n);
    for(int &x: weights)
    {
        cin>>x;
    }

    sort(weights.begin(), weights.end());

    int ans = 0;
    int i = 0;
    int j = n-1;

    while(j>=i)
    {
        if(weights[i] + weights[j] <= x)
        {
            ans++;
            i++;
            j--;
        }
        else
        {
            ans += 1;
            j--;
        }
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