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
		char s[n];
		bool r=0,b=0;
		bool res=1;
		fore(i,0,n){
			cin>>s[i];
			if(s[i]=='B')b=1;
			if(s[i]=='R')r=1;
			if(s[i]=='W'){
				if(r!=b)res=0;
				b=0;
				r=0;
			}
		}
		if(r!=b)res=0;
		if(res)cout<<"YES\n";
		else cout<<"NO\n";
	}		
	return 0;
}

