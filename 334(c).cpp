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



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    int n, k; cin >> n >> k;
    vector<int> cnt(n+1, 2);

    for(int i=0;i<k;i++){
        int a; cin>> a;
        cnt[a]--;
    }

    vector<int> vs;
    for(int i=1; i<=n; i++){
        for(int j=0; j<cnt[i]; j++) vs.push_back(i);
    }


    ll ans= 1e9;
     
     if(vs.size()%2==0){
        ll sum=0;
        for(int i=0;i+1<vs.size(); i+=2){
            sum+=vs[i+1]-vs[i];
        }

        ans=sum;
     }
    else{
        ll sum=0;
        for(int i=1;i<vs.size();i+=2){
            sum+=vs[i+1]-vs[i];
        }

        ans=sum;
        for(int i=2;i<vs.size();i+=2){ 
            sum+=vs[i-1] - vs[i-2];
            sum-=vs[i]-vs[i-1];
            ans=min(ans,sum);
        }
    }

    cout<<ans<<endl;
    
    
    
//    8 5
// 1 2 4 7 8
// ans = 2

    
    
    
    
    
    
    
    
    
    
    // int t;
    // cin >> t;
    // while (t--)
    // {


    // }


    return 0;
}