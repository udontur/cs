#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, len, val, enc;
    map<char, int> f;
    priority_queue <int> pq;
    char x, key, c;
    string s, dump, ori;
    cin >> k >> x;
    getline(cin, dump);
    getline(cin, s);
    ori=s;
    len=s.length();
    for(int i=0; i<len; i++){
        if(!isalpha(s[i])) continue;
        s[i]=tolower(s[i]);
        f[s[i]]++;
    }
    for(auto it=f.begin(); it!=f.end(); it++) pq.push(it->second);
    for(int i =0; i<k-1; i++) pq.pop();
    val=pq.top();
    for(auto it=f.begin(); it!=f.end(); it++) if(it->second==val) key=it->first;
    enc=((int)key-(int)tolower(x)+26)%26;
    for(int i =0; i<len; i++){
        if(ori[i]>='A'&&ori[i]<='Z'){
            c=ori[i]-enc;
            if(c<'A') c+=26;
            cout<<c;
        }else if(ori[i]>='a'&&ori[i]<='z'){
            c=ori[i]-enc;
            if(c<'a') c+=26;
            cout<<c;
        }else cout << ori[i];
    }
    return 0;
}
