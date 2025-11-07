#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<pair<int, int>, int>a, pair<pair<int, int>, int>b){
    if(a.second<b.second) return 1;
    else if(a.second==b.second){
        if(a.first.second<b.first.second) return 1;
        else if(a.first.second==b.first.second){
            if(a.first.first<b.first.first) return 1;
            else return 0;
        }else return 0;
    }else return 0;
}
int main() {
    int n;
    cin >> n;
    pair<pair<int, int>, int> a[101];
    unordered_map<string, int> stom;
    unordered_map<int, string> itom;
    stom["January"]=1, stom["February"]=2, stom["March"]=3, stom["April"]=4, stom["May"]=5, stom["June"]=6, stom["July"]=7, stom["August"]=8, stom["September"]=9, stom["October"]=10, stom["November"]=11, stom["December"]=12;
    itom[1]="January", itom[2]="February", itom[3]="March", itom[4]="April", itom[5]="May", itom[6]="June", itom[7]="July", itom[8]="August", itom[9]="September", itom[10]="October", itom[11]="November", itom[12]="December";
    char dump;
    string tmp;
    for(int i =0; i<n; i++){
        cin>>a[i].first.first>>dump>>tmp>>a[i].second;
        a[i].first.second=stom[tmp];
    }
    sort(a, a+n, cmp);
    for(int i =0; i<n; i++) cout<<a[i].first.first<<", "<<itom[a[i].first.second]<<" "<<a[i].second<<"\n";
    return 0;
}
