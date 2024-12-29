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
    ll n,s=0,mn=LONG_LONG_MAX;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v){
        cin >>x; 
        s+=x;
    }
    for(int i=0;i<(1<<n)-1;i++){
        ll c=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                c+=v[j];
            }
        }
        ll x=s-c;
        mn=min(mn,llabs(c-x));
    }
    co(mn)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin >> t;
    // while (t--) {
        asikM();      
    // }
    return 0;
}