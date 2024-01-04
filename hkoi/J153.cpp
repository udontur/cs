#include <bits/stdc++.h>
using namespace std;
int main() {
    int post=0, len;
    string word, key;
    bool insertState=0;
    cin >> word >> key;
    len=key.length();
    for(int i=0; i < len; i++){
        if(key[i]=='I'){
            insertState=!insertState;
        }else if (key[i]=='D'){
            word.erase(post, 1);
        }else{
            if(insertState){
                word.replace(post, 1, 1, key[i]);
                post++;
            }else{
                word.insert(post, 1, key[i]);
                post++;
            }
        }
    }
    cout << word << "\n";
    return 0;
}
