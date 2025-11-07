#include <bits/stdc++.h>
using namespace std;
bool isp(int n){
    for(int i =2; i<n; i++)
        if(!(n%i)) 
            return 0;
    return 1;
}
int main() {
    int n;
    cin >> n;
    if(n%2!=0){
        if(!isp(n-2)){
            cout << "Impossible";
            return 0;
        }else{
            cout << "2 " << n-2;
            return 0;
        }
    }
    for(int i =0; i<=n/2; i++){
        if (isp((n/2)+i)&&isp((n/2)-i)){
            cout << (n/2)-i << " " << (n/2)+i;
            return 0;
        }
    }
    cout << "Impossible";
    return 0;
}             
