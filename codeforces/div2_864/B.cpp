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
		ll a[n][n];
		fore(i,0,n)fore(j,0,n)cin>>a[i][j];
		ll c=0;
		fore(i,0,n)fore(j,0,n)c+=(a[i][j]!=a[n-1-i][n-1-j]);
		/*fore(i,0,n){
			imp(a[i]);
		}*/
		c/=2;
		//cout<<c<<" "<<k<<"\n";
		if(c<=k&&(n%2||(k-c)%2==0))cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
//"¿Sabes qué es más genial que la magia? Matemáticas". - Spider-Man: No Way Home
//"You know what's cooler than magic? Math". - Spider-Man: No Way Home
