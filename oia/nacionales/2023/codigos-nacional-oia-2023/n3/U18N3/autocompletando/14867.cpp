#include <bits/stdc++.h>

using namespace std;

int autocompletando(int K, vector<string> &r1, vector<string> &r2, vector<string> &r3, string &texto)
{
    vector <string> arrayTexto;
    int x=0;
    string palabra="", siguiente="";
    while(int(arrayTexto.size())<K+1)
    {
        if(texto[x]!=' ')
        {
            palabra=palabra+texto[x];
        }
        else
        {
            arrayTexto.push_back(palabra);
            palabra="";
        }
        x++;
    }
    int found=0; x=-1;
    while(!found && x<r1.size())
    {
        x++;
        if(arrayTexto[arrayTexto.size()-2]==r1[x] && arrayTexto[arrayTexto.size()-1]==r2[x] && arrayTexto[x+1]==r3[x+1])
            found=1;
    }
    return found;
}
