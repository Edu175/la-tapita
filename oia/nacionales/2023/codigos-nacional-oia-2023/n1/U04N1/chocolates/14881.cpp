#include <string>
#include <vector>

#include <bits/stdc++.h>

using namespace std;

int chocolates(int K, vector<int> &x) {
    // AQUI SE DEBE IMPLEMENTAR LA SOLUCION
    int f = 0;
    int b = 0;
    int c = 0;
    for(int a = 0; a < x.size(); ++a)
    {
        if(x[a] == 1)
        {
            b = b+1;
        }
    }
    for(int a = 0; a < x.size(); ++a)
    {
        if(x[a] == 2)
        {
            c = c+1;
        }
    }
    if(b == x.size())
    {
        f = x.size()/K;
    }
    else if(c == x.size())
    {
        f = (x.size()/K)*2;
    }
    else{
    for(int i = 0; i < x.size(); ++i)
    {
        if (x[i] > K)
        {
            x[i] == K;
        }
        f = f + (x[i]/K);
    }
    }
    return f;
}
