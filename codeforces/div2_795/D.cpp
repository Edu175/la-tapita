#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(long long i=a,ggdem=b;i<ggdem;++i)
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
		ll a[n];
		ll flag=1;
		ll maxi,sum;
		fore(i,0,n){
			cin>>a[i];
			if(i){
				maxi=max(a[i],a[i-1]);
				sum=a[i]+a[i-1];
				if(maxi<sum)flag=0;//,cout<<maxi<<" "<<sum<<"\n";
			}
		}
		if(flag)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
