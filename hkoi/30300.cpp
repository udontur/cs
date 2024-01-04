#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		int t;
		cin >> t;
        double ans=0;
		while(t--){
			double fs, ao, val;
			cin >> fs >> ao >> val;
			ans+=(((fs/ao)*val)*ao);
		}
		cout << (int)ans << "\n";
	}
	return 0;
}
