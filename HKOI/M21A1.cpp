#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        int o=0;
        cin>>s;
        int m=s.length();
        for(int j =0; j<m; j++){
            if(s[j]=='A'||s[j]=='a'||s[j]=='b'||s[j]=='D'||s[j]=='d'||s[j]=='e'||s[j]=='g'||s[j]=='O'||s[j]=='o'||s[j]=='P'||s[j]=='p'||s[j]=='Q'||s[j]=='q'||s[j]=='R') o++;
            else if(s[j]=='B') o+=2;
        }
        cout<<++o<<"\n";
    }
    return 0;
}
