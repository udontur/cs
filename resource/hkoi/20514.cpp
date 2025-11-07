#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m, seq[10000];
	vector<int> st;
	cin >> n >> m;
	for(int k =0; k<m; k++){
		st.clear();
		int pt=0;
		for(int i =0; i<n; i++) cin >> seq[i];
		for(int i =1; i<=n; i++){
			if(i<seq[pt]) st.push_back(i);
			else if(i==seq[pt]) pt++;
			else break;
			while(!st.empty()&&(st.back()==seq[pt])){
				st.pop_back();
				pt++;
			}
		}		
		if(pt==n) cout << "Yes" << endl;
        else cout << "No" << endl;
	}
    return 0;
}
