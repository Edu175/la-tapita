#include <string>
#include <vector>

using namespace std;

int chocolates(int K, vector<int> &x) {
    int r=0;

    int m=0;

    int r1;

    int y=0;

    int f=0;

    for(int i=0;i<x.size();i++){
     r=r+x[i];
      if(x[i]==0){
          y++;
      }else{
        f++;
      }
    }

 if(K!=2){
    
    r=r/K; 

    r1=r;
 }

    if(K == 2){
     m = r;

     float r2(r);

     m--;

     m=m/K;


     r2=r2/K;


       if(m == r2){
          m=m+2;
          r1=m;
        }else{
         r1=m;
        }
    }

    if(r1==0 && y != x.size() && f >= 2){
      r1=1;
    }
     
  return r1;
}
