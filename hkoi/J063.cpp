#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=9, a[9][9], o=0;
    bool flag=0;
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i =3; i<6; i++){
        for(int j =3; j<6; j++){
            if(a[i][j]!=0){
                cout << "No solution\n";
                return 0;
            }
        }
    }
    unordered_map <int, int> chk;
    for(int i =1; i<=n; i++) chk[i]=0;
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            chk[a[i][j]]++;
        }
    }
    for(int i =1; i<=n; i++){
        if(chk[i]!=8){
            cout << "No solution\n";
            return 0;
        }
    }
    if(chk.size()!=10){
        cout << "No solution\n";
        return 0;
    }
    int v1[3];
    unordered_map<int, bool> vm1;
    o=0;
    for(int i =1; i<=n; i++) vm1[i]=0;
    for(int i =0; i<n; i++){
        if(!a[3][i]) continue;
        if(!vm1[a[3][i]]) vm1[a[3][i]]=1;
        else{
            cout << "No solution\n";
            return 0;
        }
    }
    for(int i =1; i<=n; i++){
        if(!vm1[i]){
            v1[o]=i;
            o++;
        }
    }
    int v2[3];
    unordered_map<int, bool> vm2;
    o=0;
    for(int i =1; i<=n; i++) vm2[i]=0;
    for(int i =0; i<n; i++){
        if(!a[4][i]) continue;
        if(!vm2[a[4][i]]) vm2[a[4][i]]=1;
        else{
            cout << "No solution\n";
            return 0;
        }
    }
    for(int i =1; i<=n; i++){
        if(!vm2[i]){
            v2[o]=i;
            o++;
        }
    }
    int v3[3];
    unordered_map<int, bool> vm3;
    o=0;
    for(int i =1; i<=n; i++) vm3[i]=0;
    for(int i =0; i<n; i++){
        if(!a[5][i]) continue;
        if(!vm3[a[5][i]]) vm3[a[5][i]]=1;
        else{
            cout << "No solution\n";
            return 0;
        }
    }
    for(int i =1; i<=n; i++){
        if(!vm3[i]){
            v3[o]=i;
            o++;
        }
    }
    int r1[3];
    unordered_map<int, bool> rm1;
    o=0;
    for(int i =1; i<=n; i++) rm1[i]=0;
    for(int i =0; i<n; i++){
        if(!a[3][i]) continue;
        if(!rm1[a[i][3]]) rm1[a[i][3]]=1;
        else{
            cout << "No solution\n";
            return 0;
        }
    }
    for(int i =1; i<=n; i++){
        if(!rm1[i]){
            r1[o]=i;
            o++;
        }
    }
    int r2[3];
    unordered_map<int, bool> rm2;
    o=0;
    for(int i =1; i<=n; i++) rm2[i]=0;
    for(int i =0; i<n; i++){
        if(!a[3][i]) continue;
        if(!rm2[a[i][4]]) rm2[a[i][4]]=1;
        else{
            cout << "No solution\n";
            return 0;
        }
    }
    for(int i =1; i<=n; i++){
        if(!rm2[i]){
            r2[o]=i;
            o++;
        }
    }
    int r3[3];
    unordered_map<int, bool> rm3;
    o=0;
    for(int i =1; i<=n; i++) rm3[i]=0;
    for(int i =0; i<n; i++){
        if(!a[3][i]) continue;
        if(!rm3[a[i][5]]) rm3[a[i][5]]=1;
        else{
            cout << "No solution\n";
            return 0;
        }
    }
    for(int i =1; i<=n; i++){
        if(!rm3[i]){
            r3[o]=i;
            o++;
        }
    }
    int p[3][3];
    flag=0;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            if(v1[i]==r1[j]){
                p[0][0]=v1[i];
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag){
        cout << "No solution\n";
        return 0;
    }
    flag=0;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            if(v1[i]==r2[j]){
                p[0][1]=v1[i];
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag){
        cout << "No solution\n";
        return 0;
    }
    flag=0;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            if(v1[i]==r3[j]){
                p[0][2]=v1[i];
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag){
        cout << "No solution\n";
        return 0;
    }
    flag=0;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            if(v2[i]==r1[j]){
                p[1][0]=v2[i];
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag){
        cout << "No solution\n";
        return 0;
    }
    flag=0;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            if(v2[i]==r2[j]){
                p[1][1]=v2[i];
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag){
        cout << "No solution\n";
        return 0;
    }
    flag=0;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            if(v2[i]==r3[j]){
                p[1][2]=v2[i];
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag){
        cout << "No solution\n";
        return 0;
    }
    flag=0;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            if(v3[i]==r1[j]){
                p[2][0]=v3[i];
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag){
        cout << "No solution\n";
        return 0;
    }
    flag=0;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            if(v3[i]==r2[j]){
                p[2][1]=v3[i];
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag){
        cout << "No solution\n";
        return 0;
    }
    flag=0;
    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            if(v3[i]==r3[j]){
                p[2][2]=v3[i];
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag){
        cout << "No solution\n";
        return 0;
    }
    unordered_map<int, int> cnt;
    for(int i =1; i<=n; i++) cnt[i]=0;
    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            cnt[p[i][j]]++;
        }
    }
    for(int i =1; i<=n; i++){
        if(cnt[i]>=2||cnt[i]<=0){
            cout << "No solution\n";
            return 0;
        }
    }
    for(int i =3; i<6; i++){
        for(int j =3; j<6; j++){
            a[i][j]=p[i-3][j-3];
        }
    }
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(a[i][j]>10){
                cout << "No solution\n";
                return 0;
            }
        }
    }
    unordered_map <int, int> check;
    for(int i =1; i<=n; i++) check[i]=0;
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            check[a[i][j]]++;
        }
    }
    for(int i =1; i<=n; i++){
        if(check[i]!=9){
            cout << "No solution\n";
            return 0;
        }
    }
    if(check.size()!=9){
        cout << "No solution\n";
        return 0;
    }
    unordered_map <int, int> reg1;
    for(int i =1; i<=n; i++) reg1[i]=0;
    for(int i =0; i<3; i++){
        for(int j =0; j<3; j++){
            reg1[a[i][j]]++;
        }
    }
    for(int i =1; i<=n; i++){
        if(reg1[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> reg2;
    for(int i =1; i<=n; i++) reg2[i]=0;
    for(int i =3; i<6; i++){
        for(int j =0; j<3; j++){
            reg2[a[i][j]]++;
        }
    }
    for(int i =1; i<=n; i++){
        if(reg2[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> reg3;
    for(int i =1; i<=n; i++) reg3[i]=0;
    for(int i =6; i<9; i++){
        for(int j =0; j<3; j++){
            reg3[a[i][j]]++;
        }
    }
    for(int i =1; i<=n; i++){
        if(reg3[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> reg4;
    for(int i =1; i<=n; i++) reg4[i]=0;
    for(int i =0; i<3; i++){
        for(int j =3; j<6; j++){
            reg4[a[i][j]]++;
        }
    }
    for(int i =1; i<=n; i++){
        if(reg4[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> reg5;
    for(int i =1; i<=n; i++) reg5[i]=0;
    for(int i =3; i<6; i++){
        for(int j =3; j<6; j++){
            reg5[a[i][j]]++;
        }
    }
    for(int i =1; i<=n; i++){
        if(reg5[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> reg6;
    for(int i =1; i<=n; i++) reg6[i]=0;
    for(int i =6; i<9; i++){
        for(int j =3; j<6; j++){
            reg6[a[i][j]]++;
        }
    }
    for(int i =1; i<=n; i++){
        if(reg6[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> reg7;
    for(int i =1; i<=n; i++) reg7[i]=0;
    for(int i =0; i<3; i++){
        for(int j =6; j<9; j++){
            reg7[a[i][j]]++;
        }
    }
    for(int i =1; i<=n; i++){
        if(reg7[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> reg8;
    for(int i =1; i<=n; i++) reg8[i]=0;
    for(int i =3; i<6; i++){
        for(int j =6; j<9; j++){
            reg8[a[i][j]]++;
        }
    }
    for(int i =1; i<=n; i++){
        if(reg8[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> reg9;
    for(int i =1; i<=n; i++) reg9[i]=0;
    for(int i =6; i<9; i++){
        for(int j =6; j<9; j++){
            reg9[a[i][j]]++;
        }
    }
    for(int i =1; i<=n; i++){
        if(reg9[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> ver1;
    for(int i =1; i<=n; i++) ver1[i]=0;
    for(int i =0; i<n; i++) ver1[a[0][i]]++;
    for(int i =1; i<=n; i++){
        if(ver1[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> ver2;
    for(int i =1; i<=n; i++) ver2[i]=0;
    for(int i =0; i<n; i++) ver2[a[1][i]]++;
    for(int i =1; i<=n; i++){
        if(ver2[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> ver3;
    for(int i =1; i<=n; i++) ver3[i]=0;
    for(int i =0; i<n; i++) ver3[a[2][i]]++;
    for(int i =1; i<=n; i++){
        if(ver3[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> ver4;
    for(int i =1; i<=n; i++) ver4[i]=0;
    for(int i =0; i<n; i++) ver4[a[3][i]]++;
    for(int i =1; i<=n; i++){
        if(ver4[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> ver5;
    for(int i =1; i<=n; i++) ver5[i]=0;
    for(int i =0; i<n; i++) ver5[a[4][i]]++;
    for(int i =1; i<=n; i++){
        if(ver5[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> ver6;
    for(int i =1; i<=n; i++) ver6[i]=0;
    for(int i =0; i<n; i++) ver6[a[5][i]]++;
    for(int i =1; i<=n; i++){
        if(ver6[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> ver7;
    for(int i =1; i<=n; i++) ver7[i]=0;
    for(int i =0; i<n; i++) ver7[a[6][i]]++;
    for(int i =1; i<=n; i++){
        if(ver7[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> ver8;
    for(int i =1; i<=n; i++) ver8[i]=0;
    for(int i =0; i<n; i++) ver8[a[7][i]]++;
    for(int i =1; i<=n; i++){
        if(ver8[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> ver9;
    for(int i =1; i<=n; i++) ver9[i]=0;
    for(int i =0; i<n; i++) ver9[a[8][i]]++;
    for(int i =1; i<=n; i++){
        if(ver9[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> hor1;
    for(int i =1; i<=n; i++) hor1[i]=0;
    for(int i =0; i<n; i++) hor1[a[i][0]]++;
    for(int i =1; i<=n; i++){
        if(hor1[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> hor2;
    for(int i =1; i<=n; i++) hor2[i]=0;
    for(int i =0; i<n; i++) hor2[a[i][1]]++;
    for(int i =1; i<=n; i++){
        if(hor2[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> hor3;
    for(int i =1; i<=n; i++) hor3[i]=0;
    for(int i =0; i<n; i++) hor3[a[i][2]]++;
    for(int i =1; i<=n; i++){
        if(hor3[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> hor4;
    for(int i =1; i<=n; i++) hor4[i]=0;
    for(int i =0; i<n; i++) hor4[a[i][3]]++;
    for(int i =1; i<=n; i++){
        if(hor4[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> hor5;
    for(int i =1; i<=n; i++) hor5[i]=0;
    for(int i =0; i<n; i++) hor5[a[i][4]]++;
    for(int i =1; i<=n; i++){
        if(hor5[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> hor6;
    for(int i =1; i<=n; i++) hor6[i]=0;
    for(int i =0; i<n; i++) hor6[a[i][5]]++;
    for(int i =1; i<=n; i++){
        if(hor6[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> hor7;
    for(int i =1; i<=n; i++) hor7[i]=0;
    for(int i =0; i<n; i++) hor7[a[i][6]]++;
    for(int i =1; i<=n; i++){
        if(hor7[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> hor8;
    for(int i =1; i<=n; i++) hor8[i]=0;
    for(int i =0; i<n; i++) hor8[a[i][7]]++;
    for(int i =1; i<=n; i++){
        if(hor8[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    unordered_map <int, int> hor9;
    for(int i =1; i<=n; i++) hor9[i]=0;
    for(int i =0; i<n; i++) hor9[a[i][8]]++;
    for(int i =1; i<=n; i++){
        if(hor9[i]!=1){
            cout << "No solution\n";
            return 0;
        }
    }
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
