#include <bits/stdc++.h>
#define fore(i,a,b) for(ll i=a,jet=b;i<jet;i++)
#define snd second
#define fst first
#define pb push_back
#define SZ(x) ((int)x.size())
#define ALL(x) (x.begin(),x.end())
#define mset(a,v) memset((a),(v),sizeof(a))
#define JET ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vv;
 
const int maxn=1e6; 
const int MOD = 1e9+7;
 
int dp[maxn];
 
int mas (int x, int y){
	x+=y;
	if(x>=MOD) x-=MOD;
	return x; 
} 
 
int main(){JET
	#ifdef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s; cin>>s;
	int rta=1;
	fore(i,1,SZ(s)){
		if ((s[i]=='W' || s[i]=='E') && (s[i-1]=='N'||s[i-1]=='S')){
			rta*=2;
			rta%=MOD;
		}
	}
	cout<<rta<<"\n";
	return 0;
 }