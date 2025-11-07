#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << n << "\n";
    while(n>1){
        if(n%2) n=3*n+1;
        else n/=2;
        cout << n << "\n";
    }
    return 0;
}
