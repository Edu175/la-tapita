#include <string>
#include <vector>
#include <queue>
#include <utility>
#include <iostream>

using namespace std;

long long bombones(int K, vector<int> &x) {
    long long res = 0;
	if (x.size() == 1 && K != 1) return res;
	if (K == 1) {
		for (int i=0; i<x.size(); i++) {
			res+=x[i];
		}
		return res;
	}
    priority_queue<pair<int,int> > pq;
    for (int i=0; i<x.size(); i++) {
    	pq.push({x[i], i});
    }
    queue<pair<int,int> > tmp;
    while (pq.size() >= K) {
		pair<int, int> a;
    	for (int i=0; i<K; i++) {
    		a = pq.top(); pq.pop();
    		tmp.push(a);
    	}
    	res+=a.first;
    	for (int i=0; i<K; i++) {
    		pair<int, int> b = tmp.front(); tmp.pop();
    		if (b.first-a.first <= 0) continue;
    		pq.push({b.first-a.first, b.second});
    	}
    }
    return res;
}
