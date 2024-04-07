#include <bits/stdc++.h>
using namespace std;
vector <char> r(5), s(5);
int ctoi(char c){
    if(c=='A') return 1;
    else if(c=='T') return 10;
    else if(c=='J') return 11;
    else if(c=='Q') return 12;
    else if(c=='K') return 13;
    else return (int)(c-'0');
}
bool st(){
    if(r[0]==1&&r[4]==13) return (r[1]==10&&r[2]==11&&r[3]==12);
    for(int i =0; i<4; i++) if(r[i+1]!=r[i]+1) return 0;
    return 1;
}
bool f(){return (s[0]==s[1]&&s[0]==s[2]&&s[0]==s[3]&&s[0]==s[4]);} 
bool fh(){return ((r[0]==r[1]&&r[1]!=r[2]&&r[2]==r[3]&&r[3]==r[4])||(r[0]==r[1]&&r[1]==r[2]&&r[2]!=r[3]&&r[3]==r[4]));}
bool f4(){return ((r[0]==r[1]&&r[1]==r[2]&&r[2]==r[3]&&r[3]!=r[4])||(r[0]!=r[1]&&r[1]==r[2]&&r[2]==r[3]&&r[3]==r[4]));}
bool sf(){return(st()&&f());}
int main() {
    for(int i=0; i<5; i++){
        string str;
        cin >> str;
        r[i]=ctoi(str[0]);
        s[i]=str[1];
    }
    sort(r.begin(), r.end());
    sort(s.begin(), s.end());
    if(sf()) cout << "5";
    else if(f4()) cout << "4";
    else if(fh()) cout << "3";
    else if(f()) cout << "2";
    else if(st()) cout << "1";
    else cout << "0";
    return 0;
}
