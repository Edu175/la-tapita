#include <bits/stdc++.h>
#define fore(i,a,b) for(ll i=a,jet=b;i<jet;i++)
#define fst first
#define snd second
#define pb push_back
#define ALL(x) x.begin(),x.end()
#define SZ(x) ((ll)x.size())
#define mset(a,v) memset((a),(v),sizeof(a))
#define JET ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef vector<ll> vv;
typedef pair<ll,ll> ii;

int main(){
	JET
	ll n; cin>>n;
	vector<ll>a(n),p(n);
	fore(i,0,n)cin>>a[i],a[i]--,p[a[i]]=i;
	ll res=1;
	fore(i,0,n-1)res+=p[i]>p[i+1];
	ll ans=0;
	while(res>1){
		ans++;
		res=(res+1)/2;
	}
	cout<<ans<<"\n";
	return 0;
}