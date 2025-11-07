#include <bits/stdc++.h>
using namespace std;
int main() {
    int len, co=0, o=0;
    string s;
    bool mt=0;
    getline (cin, s);
    len=s.length();
    if(s[0]==',') o++;
    for(int i =0; i<len; i++){
        if(s[i]==','&&!mt){
            co++;
            mt=1;
        }else if(s[i]==','&&mt){
            o++;
            co++;
            mt=1;
        }else if(s[i]==' ') {
            mt=1;
        }else{
            mt=0;  
        }
    }
    if(s[len-1]==','||(s[len-1]==' '&&mt)) o++;
    (co!=5) ? cout << "Invalid" : cout << o;
    return 0;
}
