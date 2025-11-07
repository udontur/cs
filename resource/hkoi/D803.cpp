#include <bits/stdc++.h>
using namespace std;
void ins_sort(int* a, int n){
    for(int i =1; i<n; i++){
        int key=a[i];
        int j=i-1;
        while(j>=0&&key<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        for(int k =0; k<i+1;k++) cout << a[k] << " ";
        cout << "\n";
    }
}
int main(){
    int n, a[101];
    cin >> n;
    for(int i =0; i<n;i++) cin >> a[i];
    cout << a[0] << "\n";
    ins_sort(a, n);
    return 0;
}
