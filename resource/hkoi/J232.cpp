#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, ans=0, pos=0, pt1, pt2;
    char arr[2001][2001]{0};
    bool mapv[2001][2001]{0};
    cin >> x >> y;
    for(int i =0; i<x;i++)
        for(int j =0; j<y; j++)
            cin >> arr[i][j];
    for(int i =1; i<x; i++){
        for(int j=1; j<y; j++){
            pos=0;
            if(arr[i][j]=='U'&&arr[i-1][j]=='.') mapv[i-1][j]=1;
            else if(arr[i][j]=='U'&&arr[i-1][j]=='#'){
                for(int k =i-1; k>-1; k--){
                    if(arr[k][j]=='.'){
                        pos=1;
                        pt1=k;
                        pt2=j;
                        break;
                    }else if(arr[k][j]!='#') break;
                }
                if(pos==1) mapv[pt1][pt2]=1;
            }else if(arr[i][j]=='D'&&arr[i+1][j]=='.') mapv[i+1][j]=1;
            else if(arr[i][j]=='D'&&arr[i+1][j]=='#'){
                for(int k =i+1; k<x; k++){
                    if(arr[k][j]=='.'){
                        pos=1;
                        pt1=k;
                        pt2=j;
                        break;
                    }else if(arr[k][j]!='#') break;
                }
                if(pos==1) mapv[pt1][pt2]=1;
            }else if(arr[i][j]=='L'&&arr[i][j-1]=='.') mapv[i][j-1]=1;
            else if(arr[i][j]=='L'&&arr[i][j-1]=='#'){
                for(int k =j-1; k>-1; k--){
                    if(arr[i][k]=='.'){
                        pos=1;
                        pt1=i;
                        pt2=k;
                        break;
                    }else if(arr[i][k]!='#') break;
                }
                if(pos==1) mapv[pt1][pt2]=1;
            }else if(arr[i][j]=='R'&&arr[i][j+1]=='.') mapv[i][j+1]=1;
            else if(arr[i][j]=='R'&&arr[i][j+1]=='#'){
                for(int k =j+1; k<y; k++){
                    if(arr[i][k]=='.'){
                        pos=1;
                        pt1=i;
                        pt2=k;
                        break;
                    }else if(arr[i][k]!='#') break;
                }
                if(pos==1) mapv[pt1][pt2]=1;
            }
        }
    }
    for(int i =0; i<x; i++)
        for(int j=0; j<y;j++)
            if(mapv[i][j]) ans++;
    cout << ans;
    return 0;
}
