#include <bits/stdc++.h>
using namespace std;
char a[3][3];
int main(){
    for(int i =0; i<3; i++)
        for(int j =0; j<3; j++)
            cin >> a[i][j];
    bool draw=1;
    for(int i =0; i<3; i++)
        for(int j =0; j<3; j++)
            if(a[i][j]=='.')
                draw=0;
    if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]&&a[0][0]!='.') cout << a[0][0] << " wins";
    else if(a[1][0]==a[1][1]&&a[1][1]==a[1][2]&&a[1][0]!='.') cout << a[1][0] << " wins";
    else if(a[2][0]==a[2][1]&&a[2][1]==a[2][2]&&a[2][0]!='.') cout << a[2][0] << " wins";
    else if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]&&a[0][0]!='.') cout << a[0][0] << " wins";
    else if(a[0][1]==a[1][1]&&a[1][1]==a[2][1]&&a[0][1]!='.') cout << a[0][1] << " wins";
    else if(a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&a[0][2]!='.') cout << a[0][2] << " wins";
    else if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[0][0]!='.') cout << a[0][0] << " wins";
    else if(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[0][2]!='.') cout << a[0][2] << " wins";
    else if(draw) cout << "Draw";
    else cout << "Not ended";
    return 0;
}
