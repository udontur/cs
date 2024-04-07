#include <bits/stdc++.h>
using namespace std;
int main (){
    int nx, ny, a, b;
    vector<pair<int, int>> x, y;
    cin >> nx >> ny;
    for(int i =0; i<nx; i++){
        cin >> a >> b;
        x.push_back(make_pair(a, b));
    }
    for(int i =0; i<ny; i++){
        cin >> a >> b;
        y.push_back(make_pair(a, b));
    }
    for(int i =0; i<nx; i++){
        bool f=0;
        for(int j =0; j<ny; j++){
            if(x[i].second==y[j].second){
                cout << x[i].first << " " << x[i].second << " " << y[j].first << "\n";
                f=1;
            }
        }
        if(!f) cout << x[i].first << " " << x[i].second << " null\n";
    }
    return 0;
}
