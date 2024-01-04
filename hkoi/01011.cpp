#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b, c, d;
    char arr[80][25];
    string dump;
    cin >> n;
    getline(cin, dump);
    for(int i =0; i<80; i++){
        for(int j=0; j<25; j++){
            arr[i][j]=' ';
        }
    }
    for(int i =0; i<n; i++){
        char x;
        string s, a1="", b1="", c1="", d1="";
        getline(cin, s);
        x=s[0];
        int j =2;
        for(j =2; j<s.length(); j++){
            if(s[j]!=' ') a1+=s[j];    
            else break;
        }
        for(++j; j<s.length(); j++){
            if(s[j]!=' ') b1+=s[j];    
            else break;
        }
        for(++j; j<s.length(); j++){
            if(s[j]!=' ') c1+=s[j];    
            else break;
        }
        for(++j; j<s.length(); j++){
            if(s[j]!=' ') d1+=s[j];    
            else break;
        }
        a=stoi(a1);
        b=stoi(b1);
        c=stoi(c1);
        d=stoi(d1);
        for(int j =b; j<=d; j++){
            for(int k =a; k<=c; k++){
                if(j==b||j==d) arr[k][j]=x;
                else{
                    if(k==a||k==c) arr[k][j]=x;
                    else arr[k][j]=' ';
                }
                
            }
        }
    }
    for(int i =0; i<25; i++){
        for(int j =0; j<80; j++) cout << arr[j][i];
        cout << endl;
    }
    return 0;
}
