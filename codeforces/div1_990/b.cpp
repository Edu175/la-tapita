#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(ll i=a,jet=b;i<jet;++i)
#define SZ(x) ((int)x.size())
#define ALL(x) x.begin(),x.end()
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define imp(v) {for(auto i:v)cout<<i<<" "; cout<<"\n";}
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vv;

int main(){FIN;
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		vv a(n),vis(n);
		fore(i,0,n)cin>>a[i];
		priority_queue<ll>pq;
		vv res;
		for(auto v:a){
			while(SZ(res)&&v<res.back())pq.push(-(res.back()+1)),res.pop_back();
			if(!SZ(pq)||v<=-pq.top())res.pb(v);
			else pq.push(-(v+1));
		}
		while(SZ(pq))res.pb(-pq.top()),pq.pop();
		imp(res)
	}
	return 0;
}
