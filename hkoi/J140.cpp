#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cout<<(i+1)*(i+1)+j*(i+1)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
