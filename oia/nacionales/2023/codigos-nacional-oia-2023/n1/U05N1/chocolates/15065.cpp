#include <string>
#include <vector>

using namespace std;

int chocolates(int K, vector<int> &x) 
{
	int res = 0;
	int N = x.size();
	for(int i = 0; i <= N; i++) {
		while( x[i] >= K)
		{
			x[i] = x[i] - K;
			res = res + 1;
		}
	}
	for(int i = 0; i <= int(x.size()); i++) {
		x[i] = 1;
	}
return res;
}
