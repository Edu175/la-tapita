#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define fore(i,a,b) for(ll i=a,ggdem=b;i<ggdem;++i)
#define SZ(x) ((int)x.size())
#define ALL(x) x.begin(),x.end()
#define mset(a,v) memset((a),(v),sizeof(a))
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define imp(v) for(auto messi:v)cout<<messi<<" "; cout<<"\n"
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

int main(){FIN;
	ll N,M,V; srand((ll)&N); cin>>N>>M>>V;
	ll n=rand()%N+1;
	cout<<n<<" "<<rand()%(M-1)+2<<" "<<rand()%(M-1)+2<<"\n";
	fore(i,0,n){
		cout<<rand()%V+1<<" ";
	}
	cout<<"\n";
	return 0;
}
