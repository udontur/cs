#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("chart.txt", "w", stdout);
    int a[6];
    for(int i =0; i<6; i++) cin >> a[i];
    cout << "+-------------------------+\n";
    for(int i =10; i>=1; i--){
        cout << "|";
        for(int j =0; j<6; j++)
            if(a[j]>=i) cout << " ###";
            else cout << "    ";
        cout << " |\n";
    }
    cout << "+-------------------------+";
    return 0;
}
