#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(ll i=a,ggdem=b;i<ggdem;++i)
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
		ll n,k; cin>>n>>k;
		pair<ll,ll> a[n];
		fore(i,0,n)cin>>a[i].fst;
		fore(i,0,n)cin>>a[i].snd;
		sort(a,a+n);
		ll minp[n];
		minp[n-1]=a[n-1].snd;
		for(int i=n-2;i>=0;i--){
			minp[i]=min(a[i].snd,minp[i+1]);
		}
		//imp(minp);
		ll d=0;
		ll flag=0;
		while(k>0){
			d+=k;
			pair<ll,ll>clitoris={d+1,-1};
			ll lwb=lower_bound(a,a+n,clitoris)-a;
			//cout<<k<<" "<<d<<" "<<lwb<<" ";
			if(lwb==n){
				flag=1;
				break;
			}
			k-=minp[lwb];
			//cout<<minp[lwb]<<"\n";
			
		}
		//cout<<"\n";
		if(flag)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
//"¿Sabes qué es más genial que la magia? Matemáticas". - Spider-Man: No Way Home
//"You know what's cooler than magic? Math". - Spider-Man: No Way Home
