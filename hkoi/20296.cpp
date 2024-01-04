#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int t;
    string s;
    priority_queue<string> pq;
    cin >> t >> s;
    int n=s.length();
    for(int i =0; i<n; i++)
        for(int j =0; j<n; j++)
            for(int k =0; k<n; k++)
                for(int l =0; l<n; l++)
                    for(int p =0; p<n; p++)
                        if(((int)(s[i]-'@')-pow((int)(s[j]-'@'),2)+pow((int)(s[k]-'@'),3)-pow( (int)(s[l]-'@'),4)+pow( (int)(s[p]-'@'),5))==t&&i!=j&&j!=k&&k!=l&&l!=p){
                            string tmp="";
                            tmp+=s[i], tmp+=s[j], tmp+=s[k], tmp+=s[l], tmp+=s[p];
                            pq.push(tmp);
                        }
    if(!pq.empty()) cout << pq.top() << "\n";
    else cout << "no solution\n";
    return 0;
}
