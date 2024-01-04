#include <bits/stdc++.h>
using namespace std;
int main() {
    int ans=0, suc=0, cnt=0, cur=0;
    char a[8][8];
    for(int i =0; i<8; i++)
        for(int j=0; j<8; j++)
            cin >> a[i][j];
    for(int i =0; i<8; i++){
        for(int j=0; j<8; j++){
            cur=0;
            if(a[i][j]=='B') continue;
            suc=0, cnt=0;
            for(int k=1; k<=i; k++){
                if(a[i-k][j]=='B') cnt++;
                else if(a[i-k][j]=='W'){
                    suc=1;
                    break;
                }else{
                    suc=0;
                    break;
                }
            }
            if(suc) cur+=cnt;
            suc=0, cnt=0;
            for(int k=1; k<=min(i, 7-j); k++){
                if(a[i-k][j+k]=='B') cnt++;
                else if(a[i-k][j+k]=='W'){
                    suc=1;
                    break;
                }else{
                    suc=0;
                    break;
                }
            }
            if(suc) cur+=cnt;
            suc=0, cnt=0;
            for(int k=1; k<=7-j; k++){
                if(a[i][j+k]=='B') cnt++;
                else if(a[i][j+k]=='W'){
                    suc=1;
                    break;
                }else{
                    suc=0;
                    break;
                }
            }
            if(suc) cur+=cnt;
            suc=0, cnt=0;
            for(int k=1; k<=min(7-i, 7-j); k++){
                if(a[i+k][j+k]=='B') cnt++;
                else if(a[i+k][j+k]=='W'){
                    suc=1;
                    break;
                }else{
                    suc=0;
                    break;
                }
            }
            if(suc) cur+=cnt;
            suc=0, cnt=0;
            for(int k=1; k<=7-i; k++){
                if(a[i+k][j]=='B') cnt++;
                else if(a[i+k][j]=='W'){
                    suc=1;
                    break;
                }else{
                    suc=0;
                    break;
                }
            }
            if(suc) cur+=cnt;
            suc=0, cnt=0;
            for(int k=1; k<=min(7-i, j); k++){
                if(a[i+k][j-k]=='B') cnt++;
                else if(a[i+k][j-k]=='W'){
                    suc=1;
                    break;
                }else{
                    suc=0;
                    break;
                }
            }
            if(suc) cur+=cnt;
            suc=0, cnt=0;
            for(int k=1; k<=j; k++){
                if(a[i][j-k]=='B') cnt++;
                else if(a[i][j-k]=='W'){
                    suc=1;
                    break;
                }else{
                    suc=0;
                    break;
                }
            }
            if(suc) cur+=cnt;
            suc=0, cnt=0;
            for(int k=1; k<=min(i, j); k++){
                if(a[i-k][j-k]=='B') cnt++;
                else if(a[i-k][j-k]=='W'){
                    suc=1;
                    break;
                }else{
                    suc=0;
                    break;
                }
            }
            if(suc) cur+=cnt;
            ans=max(cur, ans);
        }
    }
    cout << ans << "\n";
    return 0;
}
