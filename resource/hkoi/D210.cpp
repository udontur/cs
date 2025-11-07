#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, c, b, l=0, r=0;
    pair<int, int> a[101];
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> c >> b;
        a[i].first=c;
        a[i].second=b;
    }
    a[n].first=a[0].first;
    a[n].second=a[0].second;
    for(int i =0; i<n; i++)
        l+=a[i].first*a[i+1].second;
    for(int i =0; i<n; i++)
        r+=a[i].second*a[i+1].first;
    int sum=abs(l-r);
    cout << fixed << setprecision(1);
    cout << static_cast<long double>(sum)/2.0;
    return 0;
}
