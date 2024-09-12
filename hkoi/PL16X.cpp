#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    reverse(s.begin(), s.end());
    int k=0;
    for(auto i: s){
        k+=i-'0';
    }
    if(!(k%3)) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
