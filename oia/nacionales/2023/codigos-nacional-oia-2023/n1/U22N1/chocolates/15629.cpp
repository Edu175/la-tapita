#include <iostream>
#include <string>
#include <vector>

using namespace std;

int chocolates(int K, vector<int> &x) {
    int contador = 0;
    int index = x.size()-1;
    while(x[index] != 0){
        for (int p = 0; p < K; p++){
            if(x[p] == 0){
                x[p] = -1;
                if(K <= x.size()){
                    K += 1;
                }
                index -= 1;
            }
        }
        for(int i = 0; i < K; i++){
            x[i] -= 1;
        }
        contador += 1;
    }


    return contador;
}

