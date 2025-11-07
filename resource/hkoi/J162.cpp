#include <bits/stdc++.h>
using namespace std;
int con(string s) {
    if(s[0]=='P') return 0; 
    if(s[0]=='E') return 60*3;
    if(s[0]=='G') return 60*8;
    if(s[0]=='I') return 60*13+30;
    if(s[0]=='N') return 60*13+45;
    if(s[0]=='H') return 60*16;
    if(s[0]=='J') return 60*17;
    if(s[0]=='A') return 60*18+30;
    if(s[2]=='T') return 60;
    return 60*11;
}
int main() {
    int h, m, ans1, ans2;
    string s, t;
    cin>>h>>m>>s>>t;
    int num=h*60+m+60*24;
    num-=con(s);
    num+=con(t);
    ans1=num/60%24;
    ans2=num%60;
    if(ans1<10) cout<<"0"<<ans1<<" ";
    else cout<<ans1<<" ";
    if(ans2<10) cout<<"0"<<ans2;
    else cout<<ans2;
    return 0;
}
