#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, ans=0, arr[101]{0};
    cin>>n;
    for(int i =0; i<n; i++) cin>>arr[i];
    a=arr[0];
    b=arr[1];
    ans=(a^b);
    for(int i =2; i<n; i++){
        a=ans;
        b=arr[i];
        ans=(a^b);
    }
    cout<<ans*ans;
    return 0;
}
