#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, pos, pos1;
    string s, st, c, t, dd, rep;
    cin >> n;
    getline(cin, dd);
    for (int i =0; i<n; i++) {
        pos1=0, pos=0, t="", s="", st="", c="", rep="";
        getline(cin, s);
        s.erase(0, 1);
        pos=s.find('\"');
        st=s.substr(0, pos);
        s.erase(0, pos+1);
        pos=s.find('\"');
        c=s.substr(0, pos);
        s.erase(0, pos+1);
        if (c==" Cut ") {
            pos=s.find('\"');
            t=s.substr(0, pos);
            s.erase(0, pos+1);
            if (st.find(t)==string::npos) {
                cout << "Command #" << i+1 << ": \"" << st << "\" " << "\n";
                continue;
            }
            pos=st.find(t);
            st.erase(pos, t.length());
            cout << "Command #" << i+1 << ": \"" << st << "\"" << "\n";
        } else if (c==" Append ") {
            pos=s.find('\"');
            t=s.substr(0, pos);
            s.erase(0, pos+1);
            st+=t;
            cout << "Command #" << i+1 << ": \"" << st << "\"" << "\n";
        } else if (c==" Replace ") {
            pos=s.find('\"');
            t=s.substr(0, pos);
            s.erase(0, pos+1);
            if (st.find(t)==string::npos) {
                cout << "Command #" << i+1 << ": \"" << st << "\" " << "\n";
                continue;
            }
            pos=s.find('\"');
            s.erase(0, pos+1);
            pos=s.find('\"');
            rep=s.substr(0, pos);
            s.erase(0, pos+1);
            pos=st.find(t);
            st.replace(pos, t.length(), rep);
            cout << "Command #" << i+1 << ": \"" << st << "\"" << "\n";
        } else {
            pos=s.find('\"');
            t=s.substr(0, pos);
            s.erase(0, pos+1);
            c.erase(0, 8);
            pos=c.find(' ');
            c.erase(pos, 1);
            pos1=stoi(c);
            st.insert(pos1-1, t);
            cout << "Command #" << i+1 << ": \"" << st << "\"" << "\n";
        }
    }
    return 0;
}
