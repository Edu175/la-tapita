#include <string>
#include <vector>
#include <iostream>

using namespace std;

int chocolates(int K, vector<int> &x){
    int N;
    int A;
    int B;

    for(int i = 0;i<N;i++){
        A += x[i];
    }  
    A = A / K;

    return A;



}


