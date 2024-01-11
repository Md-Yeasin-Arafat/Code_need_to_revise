#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define mod 998244353
#define N 10000006
#define all(x) (x).begin(), (x).end()
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
// cout<<fixed<<setprecession(8)<<ans<<endl;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree<
    ll,
    null_type,
    less<ll>,
    rb_tree_tag,
    tree_order_statistics_node_update>
    ordered_set;

bool isPerfectSquare(long long n)
{
    double root = sqrt(n);
    return floor(root) == root;
}
const int mx = 3e5 + 12;

// Coding starts from here...
vector<int> adj[mx];
int dfs(int x, int y)
{
    int ch = 1;
    for (auto u : adj[x])
    {
        if (u != y)
        {
            ch += dfs(u, x);
        }
    }

    return ch;
}

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int ans = n;
    for (auto u : adj[1])
    {
        ans = min(ans, n - dfs(u, 1));
    }

    cout << ans << endl;

    return 0;
}