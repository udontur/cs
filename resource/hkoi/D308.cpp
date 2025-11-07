#include <bits/stdc++.h> 
using namespace std;
int main() {
    int ans=0;
    string s, t;
    cin >> s >> t;
    int sn=s.length(), tn=t.length();
    for(int i =0; i<sn-tn+1; i++){
        string tmp="";
        for(int j =0; j<tn; j++) tmp+=s[i+j];
        if(tmp==t) ans++;
    }
    cout << ans << "\n";
    ans=0;
    for(int i =0; i<sn-tn+1; i++){
        string tmp="";
        for(int j =0; j<tn; j++) tmp+=s[i+j];
        if(tmp==t){
            i+=tn-1;
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
