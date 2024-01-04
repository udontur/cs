#include <bits/stdc++.h>
using namespace std;
int sol[8], x, y;
bool my[8]={0}, md1[15]={0}, md2[15]={0};
void back(int n){
	if(n==8){
		for(int i =0; i<8; i++) cout << sol[i] << " ";
		cout<< "\n";
		return;
	}
	if(y-1==n){
		sol[n]=x;
		back(n+1);
	}else{
		for(int i =0; i<8; ++i){
			if(i==(x-1)) continue;
			int d1=(n+i)%15, d2=(n-i+15)%15;
			if(!my[i]&&!md1[d1]&&!md2[d2]){
				my[i]=md1[d1]=md2[d2]=1;
				sol[n]=i+1;
				back(n+1);
				my[i]=md1[d1]=md2[d2]=0;
			}
		}
	}
}
int main(){
	my[x-1]=1;
	md1[(x-1+y-1)%15]=1;
	md2[(y-1-x+1+15)%15]=1;
	back(0);
    return 0;
}
