#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, a[100001];
    cin >> n >> m;
    for(int i =0; i<n; i++) cin >> a[i];
    for(int i =0; i<m; i++){
        int a1[100001], a2[100001], arr[100001];
        int cnt=0, o=0, l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        for(int j =l1-1; j<=r1-1; j++){
            arr[cnt] = a[j];
            cnt++;
        }
        for(int j =l2-1; j<=r2-1; j++){
            arr[cnt] = a[j];
            cnt++;
        }
        sort(arr, arr+cnt);
        for(int j =0; j<cnt; j++) cout << arr[j] << " ";
        cout << "\n";
    }
    return 0;
}
