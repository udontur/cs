#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m, r, c, s, sump=0, p[1001][1001]{0},  sums[1001][1001]{0},  mn=1e9,  curv=0;
	cin >> n >> m;
	for(int i =1; i<=n; i++){
		for(int j =1; j<=n; j++){
			cin >> p[i][j];
			sump+=p[i][j];
		}
	}
	for(int i =1; i<=m; i++){
		for(int j =1; j<=m; j++){
			cin >> s;	
            sums[i][j]=s+sums[i-1][j]+sums[i][j-1]-sums[i-1][j-1]; 
		}
	}
	for(int i =1; i<=m-n+1; i++){
		for(int j =1; j<=m-n+1; j++){			
			curv=abs(sump-(sums[i+n-1][j+n-1]-sums[i-1][j+n-1]-sums[i+n-1][j-1]+sums[i-1][j-1]));                                              
			if(curv<mn){
				r=i;
				c=j;
				mn=curv;
			}                         
		}
	}
	cout<<r<<" "<<c;
    return 0;
}
