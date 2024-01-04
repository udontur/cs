#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, p, a[100001], o=0;
    cin >> n;
    for(int i =0; i<n; i++) cin >> a[i];
    p=a[n-1];
    for(int i =0; i<n;i++)
        if(a[i]<=p)
            swap(a[i], a[o]), o++;
    for(int i =0; i<n; i++) cout <<a[i] << " ";
    return 0;
}
