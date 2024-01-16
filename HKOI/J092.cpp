#include <bits/stdc++.h> 
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int m[21]{0};
    string a[21];
    for(int i =0; i<n; i++){
        string s;
        cin>>s;
        int q=s.length();
        for(int j =0; j<q; j++) m[i]=(m[i]|(1<<(s[j]-'A')));
        a[i]=s;
    }
    string s1="";
    for(int i =0; i<n; i++) s1+=i+'0';
    int mx=101;
    string out;
    for(int i =1; i<(1<<n); i++){
        string s;
        for(int j =0; j<n; j++)
            if(i&(1<<j))
                s+=s1[j];
        int q=s.length(), cur=0;
        for(int j =0; j<q; j++){ 
            cur=(cur|m[s[j]-'0']);
        }
        if(cur==67108863&&q<mx){
            mx=q;
            out=s;
        }
    }
    if(mx==101){
        cout<<"Impossible";
        return 0;
    }
    cout<<mx<<"\n";
    for(auto i: out)
        cout<<a[i-'0']<<"\n";
    return 0;
}
