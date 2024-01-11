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

int main()
{

    int n;
    cin >> n;
    for (int i = 1;; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                if (--n == 0)
                {
                    for (int l = i; l >= 1; l--)
                    {
                        if (l <= k)
                            cout << 3;
                        else if (l <= j)
                            cout << 2;
                        else
                            cout << 1;
                    }
                    cout << endl;
                    return 0;
                }
            }
        }
    }


    return 0;
}