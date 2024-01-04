#include <iostream>
#include <vector>
using namespace std;

int par(vector<int> &a, int l, int r){
	int piv=a[r], i=l-1;
	for(int j =l; j<r; j++)
		if(a[j]<=piv)
			swap(a[++i], a[j]);
	swap(a[i+1], a[r]);
	return i+1;
}
void qsort(vector<int> &a, int l, int r){
	if(l>=r) return;
	int piv=par(a, l, r);
	qsort(a, l, piv-1);
	qsort(a, piv+1, r);
}
