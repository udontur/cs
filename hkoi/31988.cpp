#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    while(getline(cin, s)){
        string temp, ans, c;
        bool home=0, end=0;
        int len=s.length(), itr=0;
        for(int i =0; i<len; i++){
            if(s[i]=='['){
                home=1;
                end=0;
                itr=0;
            }else if(s[i]==']'){
                home=0;
                end=1;
                itr=ans.length();
            }else{
                if(home||end){
                    c=s[i];
                    ans.insert(itr, c);
                    itr++;
                }else{
                    ans+=s[i];
                    itr=i;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
