#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, bool> m;
    map<int, int> f;
    string s;
    while(cin>>s){
        int len=s.length();
        bool num=1;
        for(int i =0; i<len; i++){
            if(!isdigit(s[i])){
                num=0;
                break;
            }
        }
        if(num&&!m[s]){
            m[s]=1;
            f[s[0]-'0']++;
        }
    }
    for(auto it=f.begin(); it!=f.end(); it++) cout<<it->first<<" "<<it->second<<"\n";
    return 0;
}
