#include <bits/stdc++.h>
using namespace std;
char output[38];
int counter=0;
char map2[20][20];
int solve(int x, int y, int dir);
int H, W;
int main(){
	cin >> H >> W;	
	for(int y=0; y<H; y++)
		for(int x=0; x<W; x++)
			cin >> map2[x][y];
	solve(0,0,1);
	while(counter > 1) cout<<output[--counter];
    return 0;
}
int solve(int x, int y, int dir){	
	if((x==(W-1))&&(y==(H-1))){
		if(dir==1) output[counter++]='E';
        else if(dir==0) output[counter++]='S';
        return 1;
	}else if(map2[x][y]=='#') return 0;
	else if(((x+1)<W)&&(solve(x+1, y, 1)==1)){
		output[counter++]='E';
        return 1;
	}else if(((y+1)<H)&&(solve(x, y+1, 0)==1)){
		output[counter++]='S';
        return 1;
	}
	return 0;
}
