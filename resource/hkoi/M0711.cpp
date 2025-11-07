#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string nm[51], pr[51];
    int n;
    cin>>n;
    string dump;
    for(int i =0; i<n; i++){
        getline(cin, dump);
        getline(cin, nm[i]);
        cin>>pr[i];
    }
    string s;
    cin>>s;
    int m=s.size();
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            string cpr=pr[j];
            int t=cpr.size();
            if(i+t>m) continue;
            if(cpr[0]!=s[i]) continue;
            if(cpr[t-1]!=s[t+i-1]) continue;
            bool val=1;
            for(int k =1; k<t-1; k++){
                if(cpr[k]!=s[k+i]){
                    val=0;
                    break;
                }
            }
            if(val){
                cout<<nm[j]<<"\n";
                i+=t-1;
                break;
            }
        }
    }
    return 0;
}
