#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define sz(x) x.size()
#define vec vector<ll>

void asikM(){
    ll n,t;
    cin >>n>>t;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    ll c=0,p_sum=0;
    unordered_map<ll,ll>mp;
    mp[0]=1;
    forni{
        p_sum+=v[i];
        if(mp.find(p_sum-t) != mp.end()){
            c+=mp[p_sum-t];
        }
        mp[p_sum]++;
    }
    co(c)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--)
    asikM();      
    return 0;
}