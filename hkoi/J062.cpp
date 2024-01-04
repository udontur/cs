#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k, src, dst, num, pic, val[100][100];
    for(int i =0; i<100; i++){
        for(int j =0; j<100; j++){
            if(i==0) val[0][j]=1;
            else val[i][j]=0;
        }
    }
    cin >> n >> m >> k;
    for(int i =0; i<k; i++){
        cin >> src >> dst >> num;
        for(int j=0; j<num; j++){
            cin >> pic;
            if(val[src-1][pic-1]==1) val[dst-1][pic-1]=1;
        }
    }
    cout << 1 << endl;
    for(int i =1; i<m; i++){
        int tmp=0;
        for(int j=0; j<n; j++){
            tmp+=val[i][j];
        }
        if(tmp==n) cout << i+1 << endl;
    }
    return 0;
}
