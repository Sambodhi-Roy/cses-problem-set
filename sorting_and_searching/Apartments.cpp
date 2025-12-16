#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> desired(n);
    vector<int> size(m);

    for(int &x: desired)
    {
        cin>>x;
    }

    for(int &x: size)
    {
        cin>>x;
    }

    sort(desired.begin(), desired.end());
    sort(size.begin(), size.end());

    int count = 0;
    int i = 0;
    int j = 0;

    while(i<n && j<m)
    {
        if(abs(desired[i]-size[j] )<= k)
        {
            count++;
            i++;
            j++;
        }
        else if(size[j]<desired[i]-k)
        {
            j++;
        }
        else
        {
            i++;
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