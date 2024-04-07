#include <bits/stdc++.h>
using namespace std;
int main () {
	long long a[750001]{0}, n, ans=0;
    cin >> n;
	for(int i =0; i<n; i++) cin >> a[i];
	ans+=a[0];
	for(int i =0; i<n-1; i++)
        if(a[i]<a[i+1])
            ans+=a[i+1]-a[i];
	cout << ans;
	return 0;
}
