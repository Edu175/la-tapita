#include <string>
#include <vector>

using namespace std;

int chocolates(int K, vector<int> &x) {
    int largo = x.size();
    int max = 0;
    for(int i = 0; i < largo; i++){
        if(x[i] > max){
            max = x[i];
        }
    }
    if((largo == 1)){
        return x[0];
    }
    if(K == 1){
        return max;
    }
}