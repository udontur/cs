#include <bits/stdc++.h>
using namespace std;
int main(){
    int y1, y2;
    char x1, x2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1-='a', x2-='a';
    int dx=abs(x1-x2);
    int dy=abs(y1-y2);
    cout << max(dx, dy);
    return 0;
}
