#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);
    int sn=s.length(), tn=t.length();
    for(int i =0; i<sn; i++) s[i]=toupper(s[i]);
    for(int i =0; i<tn; i++) t[i]=toupper(t[i]);
    if(s>t) cout << "Greater";
    else if(s==t) cout << "Equal";
    else cout << "Smaller";
    return 0;
}
