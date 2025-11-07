#include <iostream>
using namespace std;
int cnt=0;
void basc(int* a, int n){
    for(int i=0; i<n; i++){
        for(int j =0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                cnt++;
            }
        }
    }
}
void bdec(int* a, int n){
    for(int i=0; i<n; i++){
        for(int j =0; j<n-i-1; j++){
            if(a[j]<a[j+1]){
                swap(a[j], a[j+1]);
                cnt++;
            }
        }
    }
}
int main() {
    int n, a[2001], asc;
    cin >> n >> asc;
    for(int i =0; i<n; i++) cin >> a[i];
    if(!asc) basc(a, n);
    else bdec(a, n);
    cout << cnt << "\n";
    for(int i =0; i<n; i++) cout << a[i] << " ";
    return 0;
}
