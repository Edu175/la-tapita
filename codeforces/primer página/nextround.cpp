#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k,p;
	p=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>=a[k-1]&&a[i]!=0){
			p+=1;
		}
	}
	cout<<p;
	return 0;
}
