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

ll n;
int main(){FIN;
	ll n; cin>>n;
	vector<ll>a(n);
	fore(i,0,n)cin>>a[i];
	ll sum=0;
	fore(i,0,n)sum+=a[i]*a[i+1];
	cout<<a[(n-1)*5000000]<<"\n";
	cout<<sum<<"\n";
	return 0;
}
