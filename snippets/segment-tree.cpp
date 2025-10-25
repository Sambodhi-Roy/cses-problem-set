#include <bits/stdc++.h>
using namespace std;

struct node
{
    int sum;
    node()
    {
        sum = 0;
    }
};

node merge(node a, node b)
{
    node ans;
    ans.sum = a.sum + b.sum;
}

node t[4 * 200200];

// Here l,r are the responsibility range of that node
// id is the index of that node in the segment tree array
void build(int id, int l, int r)
{
    if (l == r)
    {
        // Leaf node
        t[id].sum = 0;
        return;
    }
    int mid = (l + r) / 2;
    build(id * 2, l, mid);
    build(id * 2 + 1, mid + 1, r);
    t[id] = merge(t[id * 2], t[id * 2 + 1]);
}

void update(int id, int l, int r, int pos, int val)
{
    if (pos < l || pos > r)
    {
        return;
    }
    if (l == r)
    {
        t[id].sum += val;
        return;
    }
    int mid = (l + r) / 2;
    update(id * 2, l, mid, pos, val);
    update(id * 2 + 1, mid + 1, r, pos, val);
    t[id] = merge(t[id * 2], t[id * 2 + 1]);
}

node query(int id, int l, int r, int lq, int rq)
{
    if (lq > r || l > rq)
    {
        return node();
    }
    if (lq <= l && r <= rq)
    {
        return t[id];
    }
    int mid = (l + r) / 2;
    return merge(query(id * 2, l, mid, lq, rq), query(id * 2 + 1, mid + 1, r, lq, rq));
}