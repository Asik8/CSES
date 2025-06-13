#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n;
    cin >> n;
    vector <tuple<ll,ll,ll>> v(n);
    forni{
        ll x,y;
        cin>>x>>y;
        v[i]={x,y,i};
    }
    sort(all(v));
    multiset<pi>ms;
    ll room =1;
    vec(ll)ans(n);
    for(auto [st,end,i]:v){
        auto it=ms.lower_bound({st,0});
        // cout<<it->first<<" "<<it->second<<el
        if(it!=ms.begin()){
            it--;
            ll j=it->second;
            ms.erase(it);
            ms.insert({end,j});
            ans[i]=j;
        } else{
            ms.insert({end,room});
            ans[i]=room;
            room++;
        }
    }
    co(room-1)
    flx(ans)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    // cin >> t;
    while (t--)
    asikM();      
    return 0;
}