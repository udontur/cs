#include <bits/stdc++.h>
using namespace std;
int main() {
    int len;
    string s;
    cin >> s;
    len = s.length();
    if(s[1]=='3'&&s[2]=='9'){
        if(s[3]=='0'){
            if(len-4>=5&&len-4<=11) cout << "Italy\n";
            else cout << "Invalid\n";
        }else if(s[3]=='3'){
            if(len-4==9) cout << "Italy\n";
            else cout << "Invalid\n";
        }else{
            cout << "Invalid\n";
        }
    }else if(s[1]=='6'&&s[2]=='1'){
        if(len-3==9) cout << "Australia\n";
        else cout << "Invalid\n";
    }else if(s[1]=='6'&&s[2]=='5'){
        if(len-3==8) cout << "Singapore\n";
        else cout << "Invalid\n";
    }else if(s[1]=='7'){
        if(s[2]=='6'||s[2]=='7'){
            if(len-3==9) cout << "Kazakhstan\n";
            else cout << "Invalid\n";
        }else{
            if(len-2==10) cout << "Russia\n";
            else cout << "Invalid\n";
        }
    }else if(s[1]=='8'&&s[2]=='1'){
        if(len-3==10) cout << "Japan\n";
        else cout << "Invalid\n";
    }else if(s[1]=='8'&&s[2]=='8'&&s[3]=='6'){
        if(len-4==9||len-4==10) cout << "Taiwan\n";
        else cout << "Invalid\n";
    }else if(s[1]=='9'&&s[2]=='8'){
        if(len-3==10) cout << "Iran\n";
        else cout << "Invalid\n";
    }else if(s[1]=='9'&&s[2]=='9'&&s[3]=='4'){
        if(len-4==7) cout << "Azerbaijan\n";
        else cout << "Invalid\n";
    }else{
        cout << "Invalid\n";
    }
    return 0;
}
