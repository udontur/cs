#include <bits/stdc++.h>
using namespace std;
string a(char c){
    if(c=='A') return "Airport ";
    else if(c=='B') return "Border ";
    else if(c=='N') return "Overnight ";
    else return "X";
}
string b(char c){
    if(c=='1') return "Cross River ";
    else if(c=='2') return "Air-conditioned ";
    else if(c=='3') return "Holiday ";
    else return "X";
}
string c(char d){
    if(d=='0'||d=='1'||d=='2') return "Downtown ";
    else if(d=='3'||d=='4') return "West District ";
    else if(d=='7') return "North District ";
    else if(d=='9') return "East District ";
    else return "X";
}
string d(char c){
    if(c=='A'||c=='B'||c=='C') return "S";
    else if(c=='P') return "Peak Hour ";  
    else if(c=='S') return "Special ";
    else if(c=='X') return "Express ";
    else return "X";
}
int main() {
    string s;
    cin >> s;
    if(s.length()==1) cout << "Downtown Normal";
    else if(s.length()==2){
        if(isdigit(s[0])&&isdigit(s[1])){
            string s1=c(s[0]);
            string s2="Normal ";
            if(s1=="X"){cout << "Invalid"; return 0;}
            string out=s1+s2;
            cout << out;
            return 0;
        }else if(!isdigit(s[0])&&isdigit(s[1])){
            string s1="Downtown ";
            string s2=a(s[0]);
            if(s2=="X"){cout << "Invalid"; return 0;}
            string out=s1+s2;
            cout << out;
            return 0;
        }else if(isdigit(s[0])&&!isdigit(s[1])){
            string s1="Downtown ";
            string s2=d(s[1]);
            if(s2=="S") s2="Normal ";
            if(s2=="X"){cout << "Invalid"; return 0;}
            string out=s1+s2;
            cout << out;
            return 0;
        }else{cout << "Invalid"; return 0;}
    }else if(s.length()==3){
        if(!isdigit(s[0])&&isdigit(s[1])&&isdigit(s[2])){
            string s1=c(s[1]);
            string s2=a(s[0]);
            if(s1=="X"||s2=="X"){cout << "Invalid"; return 0;}
            string out=s1+s2;
            cout << out;
            return 0;
        }else if(isdigit(s[0])&&isdigit(s[1])&&!isdigit(s[2])){
            string s1=c(s[0]);
            string s2=d(s[2]);
            if(s2=="S") s2="Normal ";
            if(s1=="X"||s2=="X"){cout << "Invalid"; return 0;}
            string out=s1+s2;
            cout << out;
        }else if(!isdigit(s[0])&&isdigit(s[1])&&!isdigit(s[2])){
            string s1="Downtown ";
            string s2=d(s[2]);
            string s3=a(s[0]);
            if(s2=="S") s2="";
            if(s2=="X"||s3=="X"){cout << "Invalid"; return 0;}
            string out=s1+s2+s3;
            cout << out;
        }else if(isdigit(s[0])&&isdigit(s[1])&&isdigit(s[2])){
            string s1=c(s[1]);
            string s2=b(s[0]);
            if(s1=="X"||s2=="X"){cout << "Invalid"; return 0;}
            string out=s1+s2;
            cout << out;
        }else{cout << "Invalid"; return 0;}
    }else if(s.length()==4){
        if(!isdigit(s[0])&&isdigit(s[1])&&isdigit(s[2])&&isdigit(s[3])){
            string s1=c(s[2]);
            string s2=b(s[1]);
            string s3=a(s[0]);
            if(s1=="X"||s2=="X"||s3=="X"){cout << "Invalid"; return 0;}
            string out=s1+s2+s3;
            cout << out;
        }else if(isdigit(s[0])&&isdigit(s[1])&&isdigit(s[2])&&!isdigit(s[3])){
            string s1=c(s[1]);
            string s2=b(s[0]);
            string s3=d(s[3]);
            if(s3=="S") s3="";
            if(s1=="X"||s2=="X"||s3=="X"){cout << "Invalid"; return 0;}
            if(s2=="Holiday "&&s3=="Peak Hour "){cout << "Invalid"; return 0;}
            string out=s1+s2+s3;
            cout << out;
        }else if(!isdigit(s[0])&&isdigit(s[1])&&isdigit(s[2])&&!isdigit(s[3])){
            string s1=c(s[1]);
            string s2=d(s[3]);
            string s3=a(s[0]);
            if(s2=="S") s2="";
            if(s1=="X"||s2=="X"||s3=="X"){cout << "Invalid"; return 0;}
            if(s3=="Overnight "&&s2=="Peak Hour "){cout << "Invalid"; return 0;}
            string out=s1+s2+s3;
            cout << out;
        }else{cout << "Invalid"; return 0;}
    }else if(s.length()==5){
        if(!isdigit(s[0])&&isdigit(s[1])&&isdigit(s[2])&&isdigit(s[3])&&!isdigit(s[4])){
            string s1=c(s[2]);
            string s2=b(s[1]);
            string s3=d(s[4]);
            string s4=a(s[0]);
            if(s3=="S") s3="";
            if(s1=="X"||s2=="X"||s3=="X"||s4=="X"){cout << "Invalid"; return 0;}
            if(s4=="Overnight "&&s3=="Peak Hour "){cout << "Invalid"; return 0;}
            if(s2=="Holiday "&&s3=="Peak Hour "){cout << "Invalid"; return 0;}
            string out=s1+s2+s3+s4;
            cout << out;
        }else{cout << "Invalid"; return 0;}
    }else{cout << "Invalid"; return 0;}
    return 0;
}
