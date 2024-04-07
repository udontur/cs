#include <bits/stdc++.h>
using namespace std;
pair<string, pair<char, int>> a[101];
int cal(int i, int j, int k){
    int sum=0;
    bool girl=0;
    sum+=a[i].second.second;
    if(a[i].second.first=='F') girl=1;
    sum+=a[j].second.second;
    if(a[j].second.first=='F') girl=1;
    sum+=a[k].second.second;
    if(a[k].second.first=='F') girl=1;
    if(girl) sum+=(sum/10);
    return sum;
}
int main (){
    int n;
    string dump;
    cin>>n;
    getline(cin, dump);
    for(int i =0; i<n; i++){
        string s;
        getline(cin, s);
        int m=s.length(), ptr=0;
        string tmp[3]{""};
        for(int j =0; j<m; j++){
            if(s[j]==',') ptr++;
            else tmp[ptr]+=s[j];
        }
        a[i].first=tmp[0];
        a[i].second.first=tmp[1][0];
        a[i].second.second=stoi(tmp[2]);
    }
    int mxs=INT_MIN;
    string mx[3];
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(i==j) continue;
            for(int k =0; k<n; k++){
                if(i==k||j==k) continue;
                int score=cal(i, j, k);
                if(score>mxs){
                    mxs=score;
                    mx[0]=a[i].first;
                    mx[1]=a[j].first;
                    mx[2]=a[k].first;
                }
            }
        }
    }
    sort(mx, mx+3);
    for(int i =0; i<3; i++) cout<<mx[i]<<"\n";
    return 0;
}
