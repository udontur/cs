#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int a[26]{0}, n;
    cin >> s >> n;
    int sn=s.length();
    for(int i =0; i<sn; i++) a[s[i]-'A']++;
    for(int i =0; i<n; i++){
        int t[26]{0};
        bool b=1;
        string in;
        cin >> in;
        int inl=in.length();
        for(int j =0; j<inl; j++) t[in[j]-'A']++;
        for(int j =0; j<26; j++){
            if(t[j]>a[j]){
                b=0;
                break;
            }
        }
        (b)?cout << "Yes\n":cout<<"No\n";
    }
    return 0;
}
