#include <bits/stdc++.h>

using namespace std;

int autocompletando(int K, vector<string> &r1, vector<string> &r2, vector<string> &r3, string &texto)
{
    vector <char> arrayTexto;
    int x=0;
    while(int(arrayTexto.size())<K)
    {
        if(texto[x]!=' ')
            arrayTexto.push_back(texto[x]);
        x++;
    }
    char siguiente=texto[x+1];


    int found=0; x=0;
    while(found==0 && x<r1.size())
    {
        cout <<siguiente<<r3[x][0];
        if(arrayTexto[arrayTexto.size()-2]==r1[x][0] && arrayTexto[arrayTexto.size()-1]==r2[x][0] && siguiente==r3[x][0])
            found=1;
        x++;
    }
    return found;
}
