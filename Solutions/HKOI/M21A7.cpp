#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        string s;
        cin>>s;
        int m=s.length(), ans=0;
        for(int j =0; j<m; j++){
            if(s[j]=='R') ans++;
            else if(s[j]=='O') ans+=2;
            else if(s[j]=='Y') ans+=3;
            else if(s[j]=='G') ans+=4;
            else if(s[j]=='B') ans+=5;
            else if(s[j]=='I') ans+=6;
            else if(s[j]=='V') ans+=7;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
