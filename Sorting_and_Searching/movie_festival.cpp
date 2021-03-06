#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ld long double
#define ull unsigned ll
#define ld long double
#define pll pair<ll, ll>
#define pb push_back
#define F first
#define S second
#define VLL vector<ll>
#define VB vector<bool>
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0)
using namespace std;
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
    FASTIO;
    ll n,x,y;
    cin>>n;
    map<ll, ll> m;
    for(ll i=0; i<n; i++)
    {
        cin>>x>>y;
        m[y] = x;
    }
    ll ans=0, prev=-1;
    for(auto x:m)
    {
        if(x.S >= prev)
            ans++, prev=x.F;
    }
    cout<<ans<<'\n';
}
