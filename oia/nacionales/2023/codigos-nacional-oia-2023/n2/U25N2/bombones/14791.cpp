#include <string>
#include <vector>

using namespace std;

long long bombones(int K, vector<int> &x) {
    bool sat = false;
    long long tot = 0;
    while(!sat)
    {
        int curr = 0;
        for(int i = 0; i < x.size(); i++)
        {

            if (x[i] != 0) {
                curr++;
                x[i] -= 1;
            }

            if(curr == K) {
                tot++;
                break;
            }

            if (i == x.size()-1 && curr < K) {
                sat = true;
                break;
            }
        }
    }

    return tot;
}
