#include <string>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long bombones(int K, vector<int> &x) {
    int n = x.size();
    int aux = 0;
    long long result = 0;
    if(n > K && K != 1)
    {
        result++;
    }
    int i = 0;

    while(x.size() > K-1)
    {
        if(x.size() > K-1)
        {
            for(int i = 0; i<K; i++)
            {
                x[i]--;
            }
            result++;
        }
        for(int i = 0; i<n; i++)
        {
            if(x[i] == 0)
            {
                x.erase(x.begin() + i);
            }
        }
    }
    return result;
}



