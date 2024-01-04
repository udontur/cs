#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, gred[1000001], s=0, num=0;
    cin >> n;
    for(int i =0; i<n; i++) cin >> gred[i];
    num=n-1;
    for(int i =0; i<n; i++){
        s+=gred[i];
        if(s==gred[i+1]-i&&s>=num-i) num--;
        if(s==num-i-1) num--; 
        if(s>=num-i){
            cout << num-i << "\n"; 
            return 0;
        }
    }
    return 0;
}
