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

    
    vector<int>dx={0,1,0,-1},dy={1,0,-1,0};
    int n;cin>>n;

    vector<vector<int>>ans (n,vector<int>(n));
    int x=0,y=-1,k=0;
    ans[n/2][n/2]=-1;

    for(int i=0;i<n*n-1;i++){
        for(int j=0;j<4;j++){
            int s=x+dx[k];
            int t=y+dy[k];

            bool ok=1;
            if(min(s,t)==-1 || max(s,t)==n || ans[s][t])ok=0;
            if(!ok){
                k++;
                k%=4;
                continue;
            }

            ans[s][t]=i+1;
            x=s,y=t;
            ok=1;
            break;
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j)cout<<" ";
            if(ans[i][j]==-1)cout<<"T";
            else cout<<ans[i][j];
        }cout<<endl;
    }





   


    return 0;
}