#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;++i)
#define SZ(x) ((int)x.size())
#define ALL(x) x.begin(),x.end()
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define imp(v) for(auto edu:v)cout<<edu<<" "; cout<<"\n"
using namespace std;
typedef long long ll;

int main(){FIN;
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		fore(i,0,n)cin>>a[i];
		ll res=0;
		ll maxi;
		fore(i,0,n){
			if(!i)res=max(res,a[i]+a[n-1]);
			else res=max(res,a[i]+a[i-1]);
			if(i==n-1)res=max(res,a[i]+a[0]);
			else res=max(res,a[i]+a[i+1]);
		}
		cout<<res<<"\n";
	}
	return 0;
}
