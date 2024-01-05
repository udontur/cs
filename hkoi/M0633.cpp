#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){return a+b>b+a;}
int main(){
	int n;
    string a[51];
    cin >> n;
    for(int i =0; i<n; i++) cin >> a[i];
    sort(a, a+n, cmp);
    for(int i =0; i<n; i++) cout << a[i];
    return 0;
}
