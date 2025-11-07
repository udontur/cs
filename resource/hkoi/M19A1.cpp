#include <bits/stdc++.h>
using namespace std;
int main() {
    string oct, nov;
    int x, y;
    cin >>oct >> x >> nov >> y;
    x=(x-x%10)/10*8+x%10;
    if(x<y) cout << "Christmas ";
    else if(x>y) cout << "Halloween ";
    else cout << "April's Fool";
    return 0;
}
