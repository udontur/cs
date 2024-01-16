#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int o=n*(n*(n+1)/2);
    for(int i =n; i>=1; i--){
        cout<<o<<" ";
        for(int j =n; j>1; j--){
            cout<<o-i<<" ";
            o-=i;
        }
        o-=i;
        cout<<"\n";
    }
    return 0;
}
