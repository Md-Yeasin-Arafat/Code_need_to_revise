#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
// #define mod 1e9+7
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
const int mx = 2e6 + 12;

// Coding starts from here...;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;cin>>n>>m;
    unordered_map<ll,vector<ll>>edges;
    vector<ll>vis(n+m,0);

    for(int i=0;i<n;i++){
        int k;cin>>k;
        for(int j=0;j<k;j++){
            int x;cin>>x;
            x--;
            edges[i].push_back(n+x);
            edges[n+x].push_back(i);
        }
    }

    queue<ll>q;
    q.push(0);

    while(q.size()){
        int u=q.front();
        q.pop();

        for(auto v:edges[u]){
            if(!vis[v]){
                vis[v]=1;
                q.push(v);
            }
        }
    }

    for(int i=0;i<n;i++){
        if(!vis[i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;











//     int t;cin>>t;
//     while(t--){
//    }


    return 0;
}