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
		ll n;cin>>n;vector<ll>v(n);
		ll res=1;
		set<ll>st;
		fore(i,0,n)cin>>v[i],st.insert(v[i]);
		ll uno=0;
		if(st.count(1)==0)res=1,uno=1;
		for(auto i:st){
			if(uno){
				break;
			}
			if(st.count(i+1)){
				res=0;
				break;
			}
		}
		if(res)cout<<"YES\n"; else cout<<"NO\n";
		/*if(count(ALL(v),1==0)res=1;
		if(count(ALL(v),0)&&count(ALL(v),1))res=0;
		
		sort(ALL(v));
		
		fore(i,2,v[n-1]){
			st.insert
		}*/
	}
	 return 0;
}
