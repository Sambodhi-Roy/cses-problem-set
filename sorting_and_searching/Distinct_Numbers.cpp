#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &x:arr)
    {
        cin>>x;
    }

    set<int> s;
    for(int x:arr)
    {
        s.insert(x);
    }

    cout<< s.size()<<endl;
}

int main() {
    fastio;

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}