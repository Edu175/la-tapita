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
		ll a[n];
		fore(i,0,n)cin>>a[i];
		vector<ll>res;
		ll pos=0;
		ll flag=1;
		fore(i,0,n){
			if(i<n-1&&a[i]==a[i+1])res.pb(i+2);
			else {
				if(i==pos)flag=0;
				res.pb(pos+1);
				pos=i+1;
				//cout<<"pos:"<<pos<<"\n";
			}
		}
		if(!flag)cout<<-1;
		else for(auto i:res)cout<<i<<" ";
		cout<<"\n";
	}
	return 0;
}
