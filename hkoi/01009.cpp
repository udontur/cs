#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin, s)){
        for(int i =0; i<s.length(); i++)
            if(isalpha(s[i])||s[i]==' ')
                cout << s[i];
        cout << "\n";
    }
    return 0;
}
