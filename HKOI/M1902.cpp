 #include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, h1[101], m1[101], h2[101], m2[101], h3[101], m3[101], h4[101], m4[101];
    int nzst[101], nzet[101],nast[101], naet[101], zst[101], zet[101],ast[101], aet[101], st[101], et[101];
    int o=0, srt=0, end=0, maxv=0, hh1=0, mm1=0, hh2=0, mm2=0;                                         
    string trash;
    cin >> n;
    if(n==0){
        zst[0]=420;
        zet[0]=1380;
        n++;
    }else{
        for(int i =0; i<n; i++){
            scanf("%d:%d-%d:%d", &h1[i], &m1[i], &h2[i], &m2[i]);
            getline(cin, trash);
        }
        for(int i =0; i<n; i++){
            nzst[i]=(h1[i]*60)+m1[i];
            nzet[i]=(h2[i]*60)+m2[i];
        }
        if(nzst[0]==420&&nzet[0]==1380){
            cout << "SAD\n";
            return 0;
        }
        if(nzst[0]==420&&nzet[n-1]==1380){
            for(int i =0; i<n-1; i++){
                zst[i]=nzet[i];
                zet[i]=nzst[i+1];
            }
            n--;
        }else if(nzst[0]!=420&&nzet[n-1]==1380){
            zst[0]=420;
            zet[0]=nzst[0];
            for(int i =1; i<n; i++){
                zst[i]=nzet[i-1];
                zet[i]=nzst[i];
            }
        }else if(nzst[0]==420&&nzet[n-1]!=1380){
            for(int i =0; i<n-1; i++){
                zst[i]=nzet[i];
                zet[i]=nzst[i+1];
            }
            zst[n-1]=nzet[n-1];
            zet[n-1]=1380;
        }else if(nzst[0]!=420&&nzet[n-1]!=1380){
            zst[0]=420;
            zet[0]=nzst[0];
            for(int i =1; i<n; i++){
                zst[i]=nzet[i-1];
                zet[i]=nzst[i];
            }
            zst[n]=nzet[n-1];
            zet[n]=1380;
            n++;
        }
    }
    cin >> m;
    if(m==0){
        ast[0]=420;
        aet[0]=1380;
        m++;
    }else{
        for(int i =0; i<m; i++){
            scanf("%d:%d-%d:%d", &h3[i], &m3[i], &h4[i], &m4[i]);
            getline(cin, trash);
        }
        for(int i =0; i<m; i++){
            nast[i]=(h3[i]*60)+m3[i];
            naet[i]=(h4[i]*60)+m4[i];
        }
        if(nast[0]==420&&naet[0]==1380){
            cout << "SAD\n";
            return 0; 
        }
        if(nast[0]==420&&naet[m-1]==1380){
            for(int i =0; i<m-1; i++){
                ast[i]=naet[i];
                aet[i]=nast[i+1];
            }
            m--;
        }else if(nast[0]!=420&&naet[m-1]==1380){
            ast[0]=420;
            aet[0]=nast[0];
            for(int i =1; i<m; i++){
                ast[i]=naet[i-1];
                aet[i]=nast[i];
            }
        }else if(nast[0]==420&&naet[m-1]!=1380){
            for(int i =0; i<m-1; i++){
                ast[i]=naet[i];
                aet[i]=nast[i+1];
            }
            ast[m-1]=naet[m-1];
            aet[m-1]=1380;
        }else if(nast[0]!=420&&naet[m-1]!=1380){
            ast[0]=420;
            aet[0]=nast[0];
            for(int i =1; i<m; i++){
                ast[i]=naet[i-1];
                aet[i]=nast[i];
            }
            ast[m]=naet[m-1];
            aet[m]=1380;
            m++;
        }
    }
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            if(zet[i]<=ast[j]) continue;
            if(zst[i]>=aet[j]) continue;
            if(aet[j]<=zst[i]) continue;
            if(ast[j]>=zet[i]) continue;
            if(zst[i]>=ast[j]){
                st[o]=zst[i];
            }else if(zst[i]<ast[j]){
                st[o]=ast[j];
            }
            if(zet[i]>=aet[j]){
                et[o]=aet[j];
            }else if(zet[i]<aet[j]){
                et[o]=zet[i];
            }
            o++;
        }
    }
    for(int i =0; i<o; i++){
        if(abs(et[i]-st[i])>maxv){
            maxv=abs(et[i]-st[i]);
            srt=st[i];
            end=et[i];
        }
    }
    hh1=srt/60;
    mm1=srt%60;
    hh2=end/60;
    mm2=end%60;
    if(hh1==0||hh2==0){
        cout << "SAD\n";
    }else{
        if(hh1<=9) cout <<"0";
        cout << hh1 <<":";
        if(mm1<=9) cout <<"0";
        cout <<mm1<<"-";
        if(hh2<=9) cout <<"0";
        cout <<hh2<<":";
        if(mm2<=9) cout <<"0";
        cout <<mm2<<" do HKOI with udon da turtle\n"; 
    }
    return 0;
}
