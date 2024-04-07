#include <bits/stdc++.h>
using namespace std;
string rep(string str, char check, char rep, bool chk[]) {
    int len=str.length();
    for(int i =0; i<len; i++){
        if(str[i]==check&&!chk[i]){
            str[i]=rep;
            chk[i]=1;
        }
    }
    return str;
}
bool cmp(pair<char, int>& a, pair<char, int>& b){return a.second>b.second;}
string fun(map<char, int>& m, string s, string sec, bool chk[]){
    int cnt=0;
    vector<pair<char, int>> a;
    for(auto& itr: m) a.push_back(itr);
    sort(a.begin(), a.end(), cmp);
    for(auto itr=a.begin(); itr != a.end(); itr++) {
        s=rep(s, itr->first, sec[cnt], chk);
        cnt++;
    }
    return s;
}
int main() {
    string s, sec;
    bool chk[2000001]{0};
    map<char, int> m;
    getline(cin, s);
    getline(cin, sec);
    string cpy=s;
    int n1=s.length();
    for (int i=0; i<n1; i++) m[s[i]]++;
    s=fun(m, s, sec, chk);
    cout << s;
    return 0;
}
