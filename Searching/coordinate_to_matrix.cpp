#include <iostream>
using namespace std;

int f(int n, int i, int j){
    if(i==1) return j;
    else if(j==n) return n+i-1;
    else if(i==n) return 3*n-2-j+1;
    else if(j==1) return 4*n-4-i+2;
    else return f(n-2, i-1, j-1)+4*(n-1);
}
