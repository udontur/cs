#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double a[101][101];
    cin >> n;
    for(int i =0; i<n; i++)
        for(int j =0; j<n; j++)
            cin >> a[i][j];
    cin >> n;
    cout << fixed << setprecision(1);
    for(int i =0; i<n; i++){
        int fr, to;
        char c;
        cin >> fr >> to >> c;
        if(c=='A') cout << a[min(fr, to)-1][max(fr, to)-1] << "\n";
        else cout << a[max(fr, to)-1][min(fr, to)-1] << "\n";
    }
    return 0;
}
