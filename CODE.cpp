#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll a,ll b,ll n,ll m){
    ll sl=(m/a)*(m/b);
    return sl>=n;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,n;cin>>a>>b>>n;
    ll l=max(a,b),r=max(min(a,b)*n,max(a,b));
    ll size;
    while(l<=r){
        ll m=(l+r)/2;
        if(check(a,b,n,m)){
            size=m;
            r=m-1;
        }
        else
            l=m+1;
    }
    cout<<size;
}
