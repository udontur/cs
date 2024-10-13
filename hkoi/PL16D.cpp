#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int yuj[12]{0}, yujt=0;
    for(int i =0; i<n; i++){
        string s;
        cin>>s;
        char c;
        if(s.size()==2) c=':';
        else c=s[0];
        if(c=='M'){
            yuj[0]++;
            yujt+=0;
        }else if(c=='X'){
            yuj[11]++;
            yujt+=10;
        }else{
            yuj[c-'0']++;
            yujt+=c-'0';
        }
    }
    int yer[12]{0}, yert=0;
    for(int i =0; i<n; i++){
        string s;
        cin>>s;
        char c;
        if(s.size()==2) c=':';
        else c=s[0];
        if(c=='M'){
            yer[0]++;
            yert+=0;
        }else if(c=='X'){
            yer[11]++;
            yert+=10;
        }else{
            yer[c-'0']++;
            yert+=c-'0';
        }
    }
    //cout<<yujt<<" "<<yert<<"\n";
    if(yujt>yert) cout<<"Yuju\n";
    else if(yujt<yert) cout<<"Yerin\n";
    else{
        if(yuj[10]+yuj[11]>yer[10]+yer[11]) cout<<"Yuju\n";
        else if(yuj[10]+yuj[11]<yer[10]+yer[11]) cout<<"Yerin\n";
        else{
            if(yuj[11]>yer[11]) cout<<"Yuju\n";
            else if(yuj[11]<yer[11]) cout<<"Yerin\n";
            else cout<<"Shoot-off\n";
        }
    }
    return 0;
}
