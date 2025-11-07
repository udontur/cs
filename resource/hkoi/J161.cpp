#include <bits/stdc++.h>
using namespace std;
char crash(char as, char bs, char cs);
int main(){
	int p, n, a=0, b=0, c=0;
    char ans[1000001];
    string as, bs, cs;
	cin >> n >> p >> as >> bs >> cs;
	for(int i =0; i<n; i++){
        if(as[i]!=bs[i]&&as[i]!=cs[i]){
            a++;
            ans[i]=as[i];
        }
    }
    for(int i =0; i<n; i++){
        if(as[i]==bs[i]&&as[i]!=cs[i]){
            if(b<p-1&&a<p){
                a++;
                b++;
                ans[i]=as[i];
            }else ans[i]=crash(as[i], bs[i], cs[i]);
        }else if(as[i]!=bs[i]&&as[i]==cs[i]){
            if(c<p-1&&a<p){
                a++;
                c++;
                ans[i]=as[i];
            }else ans[i]=crash(as[i], bs[i], cs[i]);
        }
    }
    for(int i =0; i<n; i++){
        if(as[i]==bs[i]&&as[i]==cs[i]){
            if(a<p&&b<p-1&&c<p-1){
                a++;
                b++;
                c++;
                ans[i]=as[i];
            }else ans[i]=crash(as[i], bs[i], cs[i]);
        }
    }
	if((a>=p)&&(b<p)&&(c<p)) cout << ans;
	else cout << "Impossible";
    return 0;
}
char crash(char as, char bs, char cs){
    int a=0, b=0, c=0;
    if(as=='A') a++;
    else if(as=='B') b++;
    else c++;
    if(bs=='A') a++;
    else if(bs=='B') b++;
    else c++;
    if(cs=='A') a++;
    else if(cs=='B') b++;
    else c++;
    if(!a) return 'A';
    else if(!b) return 'B';
    else return 'C';
}
