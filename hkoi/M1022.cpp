#include <bits/stdc++.h>
using namespace std;
int n, w, h, o=0;
vector <pair<int,int>> a(n);
bool check(pair<int, int> c){
    pair<int, int> p1(c.first, c.second);
    pair<int, int> p2(c.first+w, c.second);
    pair<int, int> p3(c.first, c.second+h);
    pair<int, int> p4(c.first+w, c.second+h);
    if(binary_search(a.begin(), a.end(), p2)){
        if(binary_search(a.begin(), a.end(), p3)){
            if(binary_search(a.begin(), a.end(), p4)){
                return 1;
            }
        }
    }
    return 0;
}    
int main() {
    cin >> n >> w >> h;
    for(int i =0; i<n; i++){
        int x, y;
        cin >> x >> y;
        a.insert(a.begin()+i, make_pair(x,y));
    }
    sort(a.begin(), a.end());
    for(int i =0; i<n; i++)
        if(check(a[i]))
            o++;
    cout << o;
    return 0;
}
