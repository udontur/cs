#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    if(n<=pow(k, 2)){
        for(int i =1; i<=n/k; i++)
            for(int j=i*k; j>=(i-1)*k+1; j--)
                cout << j << " ";
        if(n%k!=0)
            for(int j=n; j>=n/k*k+1; j--) 
                cout << j << " ";
    }else cout << "Impossible";
    return 0;
}
