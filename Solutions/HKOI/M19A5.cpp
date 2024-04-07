#include <bits/stdc++.h>
using namespace std;
int main() {
    string in, out;
    getline(cin, in);
    int n=in.length();
    if(isdigit(in[0])){
        for(int i =0; i<n; i++){
            if(in[i]=='0') cout << 'z';
            else if(in[i]=='1') cout << 'a';
            else if(in[i]=='2') cout << 'b';
            else if(in[i]=='3') cout << 'c';
            else if(in[i]=='4') cout << 'd';
            else if(in[i]=='5') cout << 'e';
            else if(in[i]=='6') cout << 'f';
            else if(in[i]=='7') cout << 'g';
            else if(in[i]=='8') cout << 'h';
            else if(in[i]=='9') cout << 'i';
        }
    }else{
        for(int i =0; i<n; i++){
            if(in[i]=='z') cout << '0';
            else if(in[i]=='a') cout << '1';
            else if(in[i]=='b') cout << '2';
            else if(in[i]=='c') cout << '3';
            else if(in[i]=='d') cout << '4';
            else if(in[i]=='e') cout << '5';
            else if(in[i]=='f') cout << '6';
            else if(in[i]=='g') cout << '7';
            else if(in[i]=='h') cout << '8';
            else if(in[i]=='i') cout << '9';
        }
    }
    return 0;
}
