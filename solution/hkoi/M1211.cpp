#include <bits/stdc++.h>
using namespace std;
string turn(string s){
    for(int i =0; i<s.length(); i++)
        s[i]=toupper(s[i]);
    return s;
}
int main() {
    int n, m, k, o=0;
    string p1, p2, s[101], trash;
    map <string, vector <string>> a;
    map <string, string> r;
    cin >> n >> m >> k;
    getline(cin, trash);
    for(int i =0; i<n; i++) getline(cin, trash);
    for(int i =0; i<m; i++) getline(cin, s[i]);
    for(int i =0; i<k; i++){
        cin >> p1 >> p2;
        a[p2].push_back(p1);
    }
    for(int i =0; i<m; i++){
        int x=a[s[i]].size();
        o=max(o, x);
    }
    for(auto itr=a.begin(); itr!=a.end(); itr++){
        if(itr->second.size()==o){
            cout << itr->first << endl;
            cout << itr->second.size() << endl;
            sort(itr->second.begin(), itr->second.end());
            for(int i =0; i<itr->second.size(); i++){
                string y=itr->second[i];
                r[turn(y)]=itr->second[i];
            }
            for(auto it=r.begin(); it!=r.end(); it++){
                cout << it->second << endl;
            }
            break;
        }
    }
    return 0;
}
