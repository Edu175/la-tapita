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
typedef pair<ll,ll> ii;

bool is_prime(ll n){
	for(ll i=2;i*i<=n;i++){
		if(n%i==0)return 0;
	}
	return 1;
}

int main(){FIN;
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll res=0;
		if(__builtin_popcountll(n)==1){
			if(n!=2)res=1;
		}
		else {
			if(n%2==0&&is_prime(n/2))res=1;
		}
		//cout<<n<<": ";
		if(res)cout<<"FastestFinger\n";
		else cout<<"Ashishgup\n";
	}
	return 0;
}
