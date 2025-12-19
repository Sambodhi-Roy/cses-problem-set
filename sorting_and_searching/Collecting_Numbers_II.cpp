#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    vector<int> pos(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        pos[arr[i]] = i;
    }

    int count = 1;
    for(int i=1;i<n;i++)
    {
        if(pos[1+i]<pos[i])
        {
            count++;
        }
    }

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        a--;
        b--;

        int x = arr[a];
        int y = arr[b];

        int d[] = {-1,0,1};
        set<int> s;
        for(int i=0;i<3;i++)
        {
            if(x+d[i]>=1 && x+d[i]<=n)
            {
                s.insert(x+d[i]);
            }
            if(y+d[i]>=1 && y+d[i]<=n)
            {
                s.insert(y+d[i]);
            }
        }

        // Remove old breaks
        for(int v:s)
        {
            if(v<n && pos[v]>pos[v+1])
            {
                count--;
            }
        }

        // Swap values
        swap(arr[a], arr[b]);
        swap(pos[x],pos[y]);

        // Add new breaks
        for(int v:s)
        {
            if(v<n && pos[v]>pos[v+1])
            {
                count++;
            }
        }

        cout<<count<<endl;
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