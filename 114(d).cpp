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
int cnt[101],dp[101];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;cin>>n;
    for(int i=2;i<=n;i++){
        int x=i;
        for(int j=2;x>1;j++){
            while(x%j==0){
                cnt[j]++;
                x/=j;
            }
        }
    }


    dp[1]=1;
    for(int i=1;i<=100;i++)if(cnt[i]){
        for(int j=75;j>=1;j--){
            for(int k=1;k<=cnt[i];k++){
                if(j*(k+1)<=75)dp[j*(k+1)]+=dp[j];
            }
        }
    }

    cout<<dp[75]<<endl;
   


    return 0;
}