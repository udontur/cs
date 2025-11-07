#include <bits/stdc++.h> 
using namespace std;
int gcds(int a, int b){
    if(!a) return b;
    return gcds(b%a, a);
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << gcds(n, m) << "\n";
    cout << (n*m)/gcds(n, m);
}
