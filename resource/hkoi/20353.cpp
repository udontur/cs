#include <bits/stdc++.h>
using namespace std;
unordered_map<string, bool> chk;
bool pal(int l, int r, string s){
    string check="";
    for(int i=l; i<=r; i++) check+=s[i];
    if(chk.count(check)) return 0;
    for(int i=l; i<=r; i++)
        if(s[i]!=s[r-i+l])
            return 0;
    chk[check]=1;
    return 1;
}
int main() {
    string s;
    while(getline(cin, s)){ 
        int n=s.length(), ans=0; 
        for(int i=0; i<n; i++){
            int l=0, r=i;
            while(r<n){
                if(pal(l, r, s)) ans++;
                l++, r++;
            }
        }
        chk.clear();
        cout << "The string \'" << s;
        cout << "\' contains " << ans; 
        cout << " palindromes.\n";
    }
    return 0;
}
