#include <bits/stdc++.h>
using namespace std;
int main() {
    char a[101]{'0'}, b[101]{'/'};
    string str=" ";
    int m=0, n=6;
    bool tf[101]{0};
    for(int i =0; i<6; i++) cin >> a[i];
    for(int i =0; i<6; i++) cin >> b[i];
    for(int i =0; i<6; i++){
        if(b[i]=='6'){
            b[n]='9';
            n++;
        }
        if(b[i]=='9'){
            b[n]='6';
            n++;
        }
    }
    for(int i =0; i<6; i++){
        if(a[i]=='6'){
            a[n]='9';
            n++;
        }
        if(a[i]=='9'){
            a[n]='6';
            n++;
        }
    }
    cin >> m;
    for(int i =0; i<m; i++){
        cin >> str;
        for(int j =0; j<n; j++)
            for(int k =0; k<n; k++)
                if((a[j]==str[0]&&b[k]==str[1])||(a[j]==str[1]&&b[k]==str[0]))
                    tf[i]=1;
    }
    for(int i =0; i<m; i++){
        if(tf[i]==1) cout<<"Yes\n";
        else cout << "No\n";
    }
    return 0;
}
