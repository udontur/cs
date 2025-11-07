#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, cnt=1;
    while(cin >> n >> m){
        int num;
        char mp[1001][1001];
        if(!n&&!m) return 0;
        num=0;
        if(cnt>1) cout << "\n";
        for(int i=0; i<1001; i++)
            for (int j=0; j<1001; j++)
                mp[j][i]=0;
        for(int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                cin >> mp[j][i];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                num=0;
                if(mp[j][i]=='.'){
                    if(mp[j-1][i-1]=='*') num++;
                    if(mp[j-1][i]=='*') num++;
                    if(mp[j-1][i+1]=='*') num++;
                    if(mp[j][i+1]=='*')  num++;
                    if(mp[j+1][i+1]=='*') num++;
                    if(mp[j+1][i]=='*') num++;
                    if(mp[j+1][i-1]=='*') num++;
                    if(mp[j][i-1]=='*') num++;
                    mp[j][i]=num+'0';
                }
            }
        }
        cout << "Field #" << cnt << ":"<< "\n";
        cnt++;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cout << mp[j][i];
            cout << "\n";
        }
    }
    return 0;
}
