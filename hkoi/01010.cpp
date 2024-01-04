#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, cur, p=-1000, mx=-1000;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> cur;
        if(cur<=p+cur) p+=cur;
        else p=cur;
        if(mx<0) mx=0;
        mx=max(mx, p);
    }
    cout << mx;
    return 0;
}
