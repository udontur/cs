#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map<string, string>m;
    map<char, string>p;
    cin >> n;
    for(int i =0; i<n ;i++){
        string s1, s2;
        cin >> s1 >> s2;
        m[s1]=s2;
    }
    cin >> n;
    cin.ignore();
    for(int i =0; i<n; i++){
        string s, p1, p2, tmp="", t="";
        getline(cin, s);
        getline(cin, p1);
        getline(cin, p2);
        int len=s.length(), cnt=0;
        for(int j =0; j<=len; j++){
            if(s[j]==' '||j==len){
                if(m.count(tmp)){
                    p[p1[cnt]]=m[tmp];
                    cnt++;
                }else{
                    p[p1[cnt]]=tmp;
                    cnt++;
                }
                tmp="";
                continue;
            }
            tmp+=s[j];
        }
        len=p2.length();
        for(int j =0; j<len; j++){
            cout << p[p2[j]] << " ";
        }
        cout << '\n';
    }
    return 0;
}
