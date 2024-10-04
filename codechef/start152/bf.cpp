#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(ll i=a,jet=b;i<jet;++i)
#define SZ(x) ((int)x.size())
#define ALL(x) x.begin(),x.end()
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define imp(v) {for(auto gdljh:v)cout<<gdljh<<" "; cout<<"\n";}
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
ll n,N;
const ll MAXN=1ll<<21;
vector<ll> g[MAXN];
ll vis[MAXN];

vector<bool> cv(ll mk){
	vector<bool> r;
	fore(i,0,n)r.pb(mk>>i&1);
	return r;
}
ll cv(vector<bool>v){
	ll mk=0;
	fore(i,0,n)mk|=ll(v[i])<<i;
	return mk;
}

ll dp[MAXN];
ll ppc(ll n){return __builtin_popcountll(n);}
ll mx(ll x, ll y){
	if(ppc(x)==ppc(y))return max(x,y);
	if(ppc(x)>=ppc(y))return x;
	return y;
}
ll target=0;
void dfs(ll x){
	dp[x]=x;
	vis[x]=1;
	for(auto y:g[x]){
		if(!vis[y])dfs(y);
		dp[x]=mx(dp[x],dp[y]);
	}
}
string pr(vector<bool> v){
	string s;
	for(auto i:v)s.pb('0'+i);
	return s;
}
int main(){FIN;
	cin>>n;
	N=1ll<<n;
	target=(N-1)-(2);
	// cout<<pr(cv(target))<<" target\n";
	fore(mk,0,N){
		auto x=cv(mk);
		fore(i,1,n-1){
			auto v=x;
			v[i-1]=!v[i-1]&&!v[i];
			v[i+1]=!v[i+1]&&!v[i];
			ll y=cv(v);
			g[mk].pb(y);
		}
	}
	vector<ll>ans(N);
	fore(x,0,N){
		mset(vis,0);
		dfs(x);
		ans[x]=dp[x];
		cout<<pr(cv(x))<<": "<<pr(cv(ans[x]))<<"\n";
		fore(i,0,N)if(!vis[i]){
			cout<<pr(cv(i))<<" not vis\n";
		}
		cout<<"\n\n";
	}
	// fore(i,0,N){
	// 	cout<<pr(cv(i))<<": "<<pr(cv(ans[i]))<<"\n";
	// 	if(n-ppc(ans[i])>1)cout<<pr(cv(i))<<" failed\n";
	// }
	return 0;
}
