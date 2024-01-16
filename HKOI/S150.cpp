#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        int o=(i*i)+1;
        for(int j =0; j<=i; j++){
            cout<<o-j*i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
