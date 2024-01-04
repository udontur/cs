#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, o=0;
    string tar, a[10001], next, x;
    bool check[10001]{0};
    cin >> n >> m >> next >> tar;
    while(cin >> a[o]) o++;
    a[o]=tar, o++;
    cout << next << "\n";
    while(next!=tar){
        for(int i =0; i<o; i++){
            int dif=0;
            for(int j =0; j<m; j++)
                if(next[j]!=a[i][j])
                    dif++;
            if(dif==1&&!check[i]){
                check[i]=1;
                next=a[i];
                cout << next << "\n";
                break;
            }
        }
    }
    return 0;
}
