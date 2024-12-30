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
    cin>>t>>n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    set<ll>s;
    s.insert(0);
    s.insert(t);
    multiset<ll>ms;
    ms.insert(t);
    forni{
        auto it1=s.upper_bound(v[i]);
        auto it2=prev(it1);
        ll l=*it2, r=*it1;
        ms.erase(ms.find(r-l));
        ms.insert(v[i]-l);
        ms.insert(r-v[i]);
        s.insert(v[i]);
        cout<<*ms.rbegin()<<" ";
    }
    cout<<endl;
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