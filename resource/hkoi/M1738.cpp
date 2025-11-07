#include <bits/stdc++.h>
#define int long long
using namespace std;
bool div(int a, int o, int b){
    if(o=='/'){
        if(a%b==0){
            if(a!=0&&b!=0) return 1;
            else return 0;
        }else return 0;
    }else return 1;
}
int f(int a, int o, int b){
    if(o=='+') return a+b;
    if(o=='-') return a-b;
    if(o=='*') return a*b;
    return a/b;
}
signed main() {
    int c[9];
    char o[6];
    for(int i =0; i<9; i++) cin >> c[i];
    for(int i =0; i<6; i++) cin >> o[i];
    sort(c, c+9);
    for(int i =0; i<400000; i++){
        if(f(c[0], o[0], c[1])==c[2]&&div(c[0], o[0], c[1])){
            if(f(c[3], o[1], c[4])==c[5]&&div(c[3], o[1], c[4])){
                if(f(c[6], o[2], c[7])==c[8]&&div(c[6], o[2], c[7])){
                    if(f(c[0], o[3], c[3])==c[6]&&div(c[0], o[3], c[3])){
                        if(f(c[1], o[4], c[4])==c[7]&&div(c[1], o[4], c[4])){
                            if(f(c[2], o[5], c[5])==c[8]&&div(c[2], o[5], c[5])){
                                cout << c[0] << " " << c[1] << " " << c[2] << endl;
                                cout << c[3] << " " << c[4] << " " << c[5] << endl;
                                cout << c[6] << " " << c[7] << " " << c[8] << endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
        next_permutation(c, c+9);
    }
    cout << "No solution";
    return 0;
}
