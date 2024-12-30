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
    cin >> n>>t;
    vector<pair<ll,ll>>p;
    forni{
        ll x;
        cin>>x;
        p.pb({x,i+1});
    }
    sort(p.begin(),p.end());
    for(int i=0;i<n-2;i++){
        ll need=t-p[i].first,j=i+1,k=n-1;
        while(j<k){
            ll s=p[j].first+p[k].first;
            if(s==need){
                cout<<p[i].second<<" "<<p[j].second<<" "<<p[k].second<<endl;
                return;
            }
            if(s<need) j++;
            else k--;
        }
    }
    co("IMPOSSIBLE");
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