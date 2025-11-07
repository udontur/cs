#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    string s, out="";
    cin >> s;
    int len=s.length();
    for(int i =0; i<len; i++) out+='_';
    while(cin>>c){
        for(int i =0; i<len; i++)
            if(s[i]==c)
                out[i]=c;
        cout << out << "\n";
        if(s==out) break;
    }
    return 0;
}
