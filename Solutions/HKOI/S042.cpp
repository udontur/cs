#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    pair<vector<int>, bool> a[101];
    cin>>n;
    for(int i =0; i<n; i++){
        int m;
        cin>>m;
        for(int j =0; j<m; j++){
            int x;
            cin>>x;
            a[x-1].first.push_back(i);
            a[x-1].second=0;
        }
    }
    vector<int> out;
    for(int i =0; i<n; i++){
        bool havesol=0;
        for(int j =0; j<n; j++){
            if(a[j].second) continue;
            int m=a[j].first.size();
            bool pass=1;
            for(int k =0; k<m; k++){
                if(!a[a[j].first[k]].second){
                    pass=0;
                    break;
                }
            }
            if(pass){
                out.push_back(j+1);
                a[j].second=1;
                havesol=1;
                break;
            }
        }
        if(!havesol){
            cout<<"No Solution";
            return 0;
        }
    }
    for(auto i: out) cout<<i<<" ";
    return 0;
}
