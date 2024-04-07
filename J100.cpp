#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x=1;
    cin>>n;
    for(int i =1; i<=n; i++){
        for(int j =0; j<i; j++){
            cout<<x<<" ";
            x++;
        }
        cout<<"\n";
    }
    for(int i =n-1; i>=1; i--){
        for(int j =0; j<i; j++){
            cout<<x<<" ";
            x++;
        }
        cout<<"\n";
    }
    return 0;
}
