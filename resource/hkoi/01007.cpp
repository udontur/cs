#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, count=0, s, sum1, sum2=0, mx=0;
    string w, ans[10001]{""};
    char dd, s1, s2, x3, x2, x1, x;
    cin >> n;
    while(cin >> dd >> dd >> dd >> s1 >> s2 >> x3 >> x2 >> x1 >> x){
        sum2=0;
        getline(cin, w);
        s=((s1-'0')*10)+(s2-'0')-1;
        sum1=((x3-'0')*1000)+((x2-'0')*100)+((x1-'0')*10)+(x-'0');
        for(int i =0; i<w.length(); i++) sum2+=w[i];
        if(sum2!=sum1) continue;
        ans[s]=w;
        if(mx<s) mx=s;
    }
    for(int i =0; i<mx+1; i++) cout << ans[i];
    return 0;
}
