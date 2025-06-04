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
    ll n,m;
    cin>>n>>m;
    vector <ll> v(n+1),in(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        in[v[i]]=i;
    }
    ll c=1;
    for(int i=1;i<n;i++) c+=(in[i]>in[i+1]);
    set<pi>s;
    while(m--){
        ll a,b;
        cin>>a>>b;
        if(v[a]+1<=n) s.insert({v[a],v[a]+1});
        if(v[a]-1>=1) s.insert({v[a]-1,v[a]});
        if(v[b]+1<=n) s.insert({v[b],v[b]+1});
        if(v[b]-1>=1) s.insert({v[b]-1,v[b]});
        for(auto [x,y]:s) c-=(in[y]<in[x]);
        swap(v[a],v[b]);
        in[v[a]]=a;
        in[v[b]]=b;
        for(auto [x,y]:s) c+=(in[y]<in[x]);
        co(c)
        s.clear();
    }
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