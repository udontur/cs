#include <bits/stdc++.h>
using namespace std;
string s;
bool check(){
    int slen=s.length();
    int atpos=-1;
    for(int i =0; i<slen; i++)
        if(s[i]=='@')
            atpos=i;
    if(atpos==-1) return 0;
    string user="", host="";
    for(int i =0; i<atpos; i++) user+=s[i];
    for(int i =atpos+1; i<slen; i++) host+=s[i];
    int userlen=user.length();
    if(userlen<1) return 0;
    for(int i =0; i<userlen; i++)
        if(!((user[i]>='0'&&user[i]<='9')||(user[i]>='a'&&user[i]<='z')
           ||(user[i]>='A'&&user[i]<='Z')|| user[i]=='.'||user[i]=='+'))
            return 0;
    if(user[0]=='.'||user[userlen-1]=='.') return 0;
    int cnt=0;
    for(int i =0; i<userlen; i++){
        if(user[i]=='.') cnt++;
        else cnt=0;
        if(cnt>=2) return 0;
    }
    int hostlen=host.length();
    if(hostlen<3) return 0;
    for(int i =0; i<hostlen; i++){
        if(!((host[i]>='0'&&host[i]<='9')||(host[i]>='a'&&host[i]<='z')
           ||(host[i]>='A'&&host[i]<='Z')|| host[i]=='-'||host[i]=='.'))
            return 0;
    }
    if(host[0]=='.'||host[hostlen-1]=='.') return 0;
    cnt=0;
    for(int i =0; i<hostlen; i++){
        if(host[i]=='.') cnt++;
        else cnt=0;
        if(cnt>=2) return 0;
    }
    cnt=0;
    for(int i =0; i<hostlen; i++)
        if(host[i]=='.')
            cnt++;
    if(!cnt) return 0;
    for(int i =0; i<hostlen; i++){
        if(host[i]=='-')
            if(host[i+1]=='.'||host[i-1]=='.')
                return 0;
        if(host[i]=='.')
            if(host[i+1]=='-'||host[i-1]=='-')
                return 0;
    }
    return 1;
}
int main(){
    cin >> s;
    if(check()) cout << "Valid";
    else cout << "Invalid";
    return 0;
}
