#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a[1001][1001];
    cin>>n;
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cin>>a[i][j];
        }
    }
    vector<pair<bool, int>> seq;
    for(int i =0; i<n-1; i++){
        for(int j =0; j<n-i-1; j++){
            if(a[j][0]>a[j+1][0]){
                swap(a[j], a[j+1]);
                seq.push_back({0, j+1});
            }
        }
    }
    int b[1001][1001];
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            b[i][j]=a[j][i];
        }
    }
    for(int i =0; i<n-1; i++){
        for(int j =0; j<n-i-1; j++){
            if(b[j][0]>b[j+1][0]){
                swap(b[j], b[j+1]);
                seq.push_back({1, j+1});
            }
        }
    }
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            a[i][j]=b[j][i];
        }
    }
    for(int i =0; i<n; i++){
        bool sol1=1;
        for(int j =0; j<n-1; j++){
            if(a[i][j]>=a[i][j+1]){
                sol1=0;
                break;
            }
        }
        if(!sol1){
            cout<<"No solution\n";
            return 0;
        }
    }
    for(int i =0; i<n-1; i++){
        if(a[i][n-1]>=a[i+1][0]){
            cout<<"No solution\n";
            return 0;
        }
    }
    for(auto i: seq){
        if(i.first) cout<<"C ";
        else cout<<"R ";
        cout<<i.second<<"\n";
    }
    cout<<"Z\n";
    return 0;
}
