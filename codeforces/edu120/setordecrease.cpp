#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(int i=a,ggdem=b;i<ggdem;++i)
#define SZ(x) ((int)x.size())
#define ALL(x) x.begin(),x.end()
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
typedef long long ll;

int main(){FIN;
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n; 
		vector<ll>v(n);
		fore(i,0,n){
			cin>>v[i];
		}
		ll X=0;
		fore(i,1,n){
			for(ll j=0;j<n;j++){
				vector<ll>w;
				if(n-1!=j)w.pb(v[j]-v[j+i]);
				ll x=0;
				fore(k,1,n){
					x=max(count(ALL(w),k),x);
				}
				X=max(x,X);
			}
		}
		ll I,J;
		fore(i,1,n){
			for(ll j=0;j<n;j++){
				vector<ll>w;
				if(n-1!=j)w.pb(v[j]-v[j+i]);
				ll x=0;
				fore(k,1,n){
					x=max(count(ALL(w),k),x);
				}
				if(x==X){
					I=i;
					J=j;
				}
			}
		}
		
	}
	 return 0;
}
