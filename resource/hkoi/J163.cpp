#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, q, s, v, o=0;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>s;
        o+=s;
    }
    cin>>q;
    for(int i =0; i<q; i++){
        cin>>v;
        if(!((o-(v*n))%2)) cout<<"Robo\n";
        else cout<<"Alice\n";
    }
    return 0;
}
