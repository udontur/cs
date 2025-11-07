#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("expr.in", "r", stdin);
    freopen("expr.out", "w", stdout);
	int n, t, ans=0;
    char o;
    cin >>t;
    while(cin >>o>>n){
        if(o=='+'){
            ans=(ans+t)%10000;
            t=n;
        }else if(o=='*') t=(n*t)%10000;
    }
    cout << (ans+t)%10000;
    return 0;
} 
