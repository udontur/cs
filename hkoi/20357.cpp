#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, dp[101][6]={0}, cn[6]={0, 1, 5, 10, 25, 50}, out[101];
	cin >> n;
    for(int i =1; i<=5; i++) dp[0][i]=1;
	for(int i =1; i<=n; i++){
		for(int j =1; j<=5; j++){
            if(i<cn[j]) dp[i][j]=dp[i][j-1];
            else dp[i][j]=dp[i][j-1]+dp[i-cn[j]][j];
		}
        out[i]=dp[i][5];
	}
	cout << "There ";
	if(out[n]==1) cout << "is only ";
	else cout << "are ";
	cout << out[n] << " ";
	if(out[n]==1) cout << "way ";
	else cout << "ways ";
	cout << "to produce " << n << " cents change.\n";
	return 0;
}
