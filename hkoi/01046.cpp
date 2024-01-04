#include <bits/stdc++.h>
using namespace std;
void r(int n, int r0, int r1, int r2){ 
    if (n==1) { 
        cout << r0 << " " << r1 << "\n";
        cout << r1 << " " << r2 << "\n";
        return;
    }
    r(n-1, r0, r1, r2);
    cout << r0 << " " << r1 << "\n";
    r(n-1, r2, r1, r0);
    cout << r1 << " " << r2 << "\n";
    r(n-1, r0, r1, r2);
}
int main(){
    int n;
    cin >> n;
    r(n, 0, 1, 2); 
    return 0;
}
