#include <bits/stdc++.h>
#define int long long
#define f first
#define s second
using namespace std;
int w, h, n, o=0;
pair<int, int> p[50001];
bool check(pair<int, int>in, int pos){
    int a[4][10]={{0, 1, 0, 3, 0, 4, 2, 2, 3, 2}
                ,{0, 1, 0, 3, 0, 4, -2, 2, -3, 2}
                ,{-1, 0, -3, 0, -4, 0, -2, -2, -2, -3}
                ,{-1, 0, -3, 0, -4, 0, -2, 2, -2, 3}};
    if(binary_search(p, p+n, make_pair(in.f+a[pos][0], in.s+a[pos][1])))
    if(binary_search(p, p+n, make_pair(in.f+a[pos][2], in.s+a[pos][3])))
    if(binary_search(p, p+n, make_pair(in.f+a[pos][4], in.s+a[pos][5])))
    if(binary_search(p, p+n, make_pair(in.f+a[pos][6], in.s+a[pos][7])))
    if(binary_search(p, p+n, make_pair(in.f+a[pos][8], in.s+a[pos][9])))
    return 1;
    return 0;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> w >> h >> n;
    for(int i =0; i<n; i++){
        cin >> p[i].f;
        cin >> p[i].s;
    }
    for(int i =0; i<n; i++){
        if(check(p[i], 0)) o++;
        if(check(p[i], 1)) o++;
        if(check(p[i], 2)) o++;
        if(check(p[i], 3)) o++;
    }
    cout << o << "\n";
    return 0;
}
