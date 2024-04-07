#include <bits/stdc++.h>
using namespace std;
int main(){
    int nx, ny, a, b, c, ans=0;
    unordered_map<int, vector<int>> x, y;
    cin >> nx >> ny;
    for(int i =0; i<nx; i++) {
        cin >> a >> b;
        x[b].push_back(a);
    }
    for(int i =0; i<ny; i++){
        cin >> c >> b;
        y[b].push_back(c);
    }
    for(auto i=x.begin(); i!=x.end(); i++)
        if(y.count(i->first))
            for(auto j=i->second.begin(); j!=i->second.end(); j++)
                for(auto k=y[i->first].begin(); k!=y[i->first].end(); k++)
                    ans++;
    cout << ans << "\n";
    return 0;
}
