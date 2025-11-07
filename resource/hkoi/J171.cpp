#include <bits/stdc++.h>
using namespace std;
string lw(string s){
    int n=s.length();
    for(int i =0; i<n; i++) s[i]=tolower(s[i]);
    return s;
}
int main(){
    int n;
    string s, dump;
    getline(cin, s);
    cin>>n;
    getline(cin, dump);
    s=lw(s);
    int sn=s.length();
    for(int i =0; i<n; i++){
        int cnt=0;
        string ans;
        getline(cin, ans);
        ans=lw(ans);
        int ansn=ans.length();
        if(ans[0]==s[cnt]) ans[0]=toupper(ans[0]), cnt++;
        for(int j =1; j<ansn; j++)
            if(ans[j-1]==' '&&ans[j]==s[cnt]) 
                ans[j]=toupper(ans[j]), cnt++;
        if(cnt!=sn) cout<<"No :(\n";
        else cout<<ans<<"\n";
    }
    return 0;
}
