#include <bits/stdc++.h>
using namespace std;
bool check(string s, string t){
    if(s.length()>t.length()) return 1;
    if(s.length()<t.length()) return 0;
    for(int i =0; i<s.length(); i++){
        if(s[i]>t[i]) return 1;
        if(s[i]<t[i]) return 0;
    }
    return 0;
}
int main() {
    string x, y, x2, y2;
    cin >> x >> y;
    for(int i =0; i<x.length(); i++){
        if(x[i]=='1'&&x[i+1]=='0'){
            x2+=':';
            i++;
        }else x2+=x[i];
    }
    for(int i =0; i<y.length(); i++){
        if(y[i]=='1'&&y[i+1]=='0'){
            y2+=':';
            i++;
        }else y2+=y[i];
    }
    if(check(x2,y)) cout << ">";
    else if(check(y2, x)) cout << "<";
    else cout << "?";
    return 0;
}
