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
    string s,ans;
    cin>>s;
    map<char,ll> mp;
    for(auto x:s) mp[x]++;
    ll c=0;
    for(auto x:mp) if(x.second%2)c++;
    if(c>1){
        co("NO SOLUTION")
        return;
    }
    vector<pair<ll,char>>v;
    for(auto x:mp) v.pb({x.second,x.first});
    sort(v.begin(),v.end()); 
    for(int i=v.size()-1;i>=0;i--){
        for(int j=0;j<(v[i].first/2);j++)
            ans+=v[i].second;
    }
    for(int i=0;i<v.size();i++){
        if((v[i].first%2)){
            ans+=v[i].second;
            break;
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<(v[i].first/2);j++)
            ans+=v[i].second;
    }
    co(ans)
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