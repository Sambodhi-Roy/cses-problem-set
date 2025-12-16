#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> tickets(n);
    vector<int> customers(m);

    for(int &x: tickets)
    {
        cin>>x;
    }
    
    for(int &x: customers)
    {
        cin>>x;    
    }
    
    multiset<int> st;
    for(int i=0;i<n;i++)
    {
        st.insert(tickets[i]);
    }

    for(int x:customers)
    {
        auto it = st.upper_bound(x);
        if(it==st.begin())
        {
            cout<<"-1"<<endl;
        }
        else
        {
            --it;
            cout<<*it<<endl;
            st.erase(it);
        }
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