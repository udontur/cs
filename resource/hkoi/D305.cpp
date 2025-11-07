#include <bits/stdc++.h>
using namespace std;
int con(char c){
    if(isdigit(c)) return c-'0';
    else return c-'A'+10;
}
int main(){
    int c=0;
    string s;
    getline(cin, s);
    cout << s << "(";
    if(isdigit(s[1])){
        c=324;
        for(int i =8; i>=2; i--) c+=i*con(s[8-i]);
    }else{
        c=0;
        for(int i =9; i>=2; i--) c+=i*con(s[9-i]);
    }
    c%=11, c-=11, c=abs(c), c%=11;
    if(c==10) cout << "A)";
    else cout << c << ")";
    return 0;
}
