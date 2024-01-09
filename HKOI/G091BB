#include <bits/stdc++.h>
#define next next_permutation
#define all(a) (a).begin(), (a).end()
using namespace std;
string cor(string s){
    int ptr=0;
    while(s[ptr]=='0') ptr++;
    swap(s[0], s[ptr]);
    return s;
}
int main() {
    int t;
    string dump;
    cin >> t;
    getline(cin, dump);
    for(int i =1; i<=t; i++){
        string s;
        getline(cin, s);
        cout<<"Case #"<<i<<": ";
        string ori=s, cmp=s;
        sort(all(ori));
        ori=cor(ori);
        next(all(cmp));
        cmp=cor(cmp);
        if(ori==cmp){
            s+="0";
            sort(all(s));
            s=cor(s);
        }else next(all(s));
        cout<<s<<"\n";
    }
    return 0;
}
