#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, int p, int q, int r){
	int n1=q-p+1, n2=r-q, l[100001], m[100001];
	for(int i =0; i<n1; i++) l[i]=a[p+i];
	for(int i =0; i<n2; i++) m[i]=a[q+i+1];
	int i=0, j=0, k=p;
	while(i<n1&&j<n2)
		if(l[i]<=m[j]) a[k]=l[i], i++, k++;
		else a[k]=m[j], j++, k++;
	while(i<n1) a[k]=l[i], i++, k++;
	while(j<n2) a[k]=m[j], j++, k++;
}
void msort(vector<int> &a, int l, int r){
	if(l>=r) return;
	int m=l+(r-l)/2;
	msort(a, l, m);
	msort(a, m+1, r);
	merge(a, l, m, r);
}
