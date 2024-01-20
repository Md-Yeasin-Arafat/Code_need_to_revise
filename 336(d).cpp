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
const int mx = 2e5 + 12;

// Coding starts from here...


ll A[mx];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i+1];
        A[i+1]=min(A[i+1],A[i]+1);
    }

    for(int i=n;i>=1;i--)A[i]=min(A[i],A[i+1]+1);
    ll ans=0;

    for(int i=0;i<n+2;i++)ans=max(ans,A[i]);
    cout<<ans<<endl;

    return 0;
}

