#include <bits/stdc++.h>
using namespace std;
int main() {
    int x1, x2, x3, x4, y1, y2, y3, y4;
    double ans;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4>>y4;
    if(x1<x2&&x2<x3&&x3<x4&&y1<y2&&y2<y3&&y3<y4) ans=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    else if(x3<x4&&x4<x1&&x1<x2&&y3<y4&&y4<y1&&y1<y2) ans=sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
    else if(x1<x2&&x2<x3&&x3<x4&&y3<y4&&y4<y1&&y1<y2) ans=sqrt((x3-x2)*(x3-x2)+(y4-y1)*(y4-y1));
    else if(x3<x4&&x4<x1&&x1<x2&&y1<y2&&y2<y3&&y3<y4) ans=sqrt((x1-x4)*(x1-x4)+(y3-y2)*(y3-y2));
    else if(x1<=x3&&x3<=x2&&y1<y2&&y2<y3&&y3<y4) ans=y3-y2;
    else if(x3<=x1&&x1<=x4&&y3<y4&&y4<y1&&y1<y2) ans=y1-y4;
    else if(x1<=x3&&x3<=x2&&y3<y4&&y4<y1&&y1<y2) ans=y1-y4;
    else if(x3<=x1&&x1<=x4&&y1<y2&&y2<y3&&y3<y4) ans=y3-y2;
    else if(x1<x2&&x2<x3&&x3<x4&&y1<=y3&&y3<=y2) ans=x3-x2;
    else if(x3<x4&&x4<x1&&x1<x2&&y3<=y1&&y1<=y4) ans=x1-x4;
    else if(x1<x2&&x2<x3&&x3<x4&&y3<=y1&&y1<=y4) ans=x3-x2;
    else if(x3<x4&&x4<x1&&x1<x2&&y1<=y3&&y3<=y2) ans=x1-x4;
    cout << fixed << setprecision(3) << ans << "\n";
    return 0;
}
