#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k, o=1, h, w, a;
    cin >> n >> m >> k;
    a=(n*m)/k;
    h=gcd(n, a);
    w=(n*m)/(k*h);
    if(n*m%k==0){
        cout << "Possible\n";
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((i/h+j/w)%2==0) cout << "A"; 
                else cout << "B";
            }
            cout << "\n";
        }
    }else cout << "Impossible";
    return 0;
}
