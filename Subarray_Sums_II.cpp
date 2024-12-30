#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(ll i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll n,t;
    cin >>n>>t;
    ll c=0,s=0;
    map<ll,ll>mp;
    mp[0]=1;
    forni{
        ll x;
        cin>>x;
        s+=x;
        if(mp.find(s-t) != mp.end())c+=mp[s-t];
        mp[s]++;
    }
    co(c)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    asikM();      
    return 0;
}