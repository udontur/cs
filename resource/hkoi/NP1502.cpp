#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("mine.in", "r", stdin);
    freopen("mine.out", "w", stdout);
    int n, m, num;
    char mp[1001][1001];
    cin >> n >> m;
    for(int i =0; i<n; i++) 
        for(int j =0; j<m; j++) 
            cin >> mp[j][i];
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            num=0;
            if(mp[j][i]=='?') {
                if(mp[j - 1][i - 1]=='*') num++;
                if(mp[j - 1][i]=='*') num++;
                if(mp[j - 1][i+1]=='*') num++;
                if(mp[j][i+1]=='*') num++;
                if(mp[j+1][i+1]=='*') num++;
                if(mp[j+1][i]=='*') num++;
                if(mp[j+1][i - 1]=='*') num++;
                if(mp[j][i - 1]=='*') num++;
                mp[j][i]=num+'0';
            }
        }
    }
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++)
            cout << mp[j][i];
        cout << "\n";
    }
    return 0;
}
