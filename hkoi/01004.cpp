#include <bits/stdc++.h> 
using namespace std;
int main(){
    int x;
    string s="", in;
    pair<string, int> p[10001];
    unordered_map<char, int> a;
    unordered_map<int, char> lk;
    cin >> x;
    a[' ']=x;
    lk[x]=' ';
    for(int i ='A'; i<='Z'; i++){
        cin >>x;
        a[i]=x;
        lk[x]=i;
    }
    getline(cin, in);
    while(getline(cin, in)) s+=in;
    int n=s.length(), ptr=0;
    bool en=0;
    string t="", w="";
    for(int i =0; i<n; i++){
        if(s[i]>='A'&&s[i]<='Z'||s[i]==' '){
            if(!en&&s[i]==' ') continue;
            en=1;
            t+=s[i];
        }else if(s[i]>='0'&&s[i]<='9'){
            w+=s[i];
            if(!(s[i+1]>='0'&&s[i+1]<='9')){
                en=0;
                int tmp=t.length();
                bool ok=0;
                string s1="";
                for(int j=tmp-1; j>=0; j--){
                    if(ok) s1+=t[j];
                    if(!ok&&t[j]>='A'&&t[j]<='Z'){
                        ok=1;
                        s1+=t[j];
                    }
                }
                reverse(s1.begin(), s1.end());
                p[ptr].first=s1;
                p[ptr].second=stoi(w);
                ptr++;
                w="", t="";
            }
        }
    }
    for(int i =0; i<ptr; i++){
        string s=p[i].first, t="";
        int len=s.length();
        for(int j =0; j<len; j++) t+=lk[(((a[s[j]]-p[i].second+27)%27)+27)%27];
        cout << "[" << t << "]\n";
    }
    return 0;
}
