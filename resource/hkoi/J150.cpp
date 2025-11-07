#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, num=1;
    cin >> n;
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cout<<num<<" ";
            num+=4;
        }
        num-=4;
        cout<<"\n";
    }
}
