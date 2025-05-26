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
    vector <ll> a,b;
    if(((n*(n+1))/2)&1){
        pn
        return;
    }
    ll l=(n+1)/2,s1=0,s2=0;
    fl(i,1,l+1){
        a.pb(i);
        s1+=i;
    }
    fl(i,l+1,n+1){
        b.pb(i);
        s2+=i;
    }
    l=0;
    s1=accumulate(all(a),0LL);
    s2=accumulate(all(b),0LL);
    while(s1!=s2){
        s1=s1+b[l]-a[l];
        s2=s2+a[l]-b[l];
        swap(a[l],b[l]);
        l++;
    }
    // cout<<s1<<" "<<s2<<el
    sort(all(a));
    sort(all(b));
    py
    co(sz(a))
    flx(a)
    co(sz(b))
    flx(b)
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