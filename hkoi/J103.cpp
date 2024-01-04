#include <bits/stdc++.h>
using namespace std;
int main() {
    int bee, cica, beet, butr;
    cin >> bee >> cica >> beet >> butr;
    if (bee==0 && cica==0 && beet==0 && butr==0)cout << "2010 " << "0" << "\n";
    else if (bee!=0 && cica==0 && beet==0 && butr==0)cout << "2011 " << bee << "\n";
    else if (bee==0 && cica!=0 && beet==0 && butr==0)cout << "2011 " << cica << "\n";
    else if (bee==0 && cica==0 && beet!=0 && butr==0)cout << "2010 " << beet << "\n";
    else if (bee==0 && cica==0 && beet==0 && butr!=0)cout << "2010 " << butr << "\n";
    else if (bee!=0 && cica!=0 && beet==0 && butr==0)cout << "2011 " << bee + cica << "\n";
    else if (bee!=0 && cica==0 && beet!=0 && butr==0)cout << "2013 " << bee + beet << "\n";
    else if (bee!=0 && cica==0 && beet==0 && butr!=0)cout << "2015 " << bee + butr << "\n";
    else if (bee==0 && cica!=0 && beet!=0 && butr==0)cout << "2014 " << cica + beet << "\n";
    else if (bee==0 && cica!=0 && beet==0 && butr!=0 && cica > butr)cout << "2011 " << cica << "\n";
    else if (bee==0 && cica!=0 && beet==0 && butr!=0)cout << "2010 " << butr << "\n";
    else if (bee==0 && cica==0 && beet!=0 && butr!=0)cout << "2010 " << beet + butr << "\n";
    else if (bee!=0 && cica!=0 && beet!=0 && butr==0)cout << "2017 " << bee + cica + beet << "\n";
    else if (bee!=0 && cica!=0 && beet==0 && butr!=0 && cica < butr)cout << "2015 " << bee + butr << "\n";
    else if (bee!=0 && cica!=0 && beet==0 && butr!=0)cout << "2011 " << bee+cica << "\n";
    else if (bee!=0 && cica==0 && beet!=0 && butr!=0)cout << "2021 " << bee + beet + butr << "\n";
    else if (bee==0 && cica!=0 && beet!=0 && butr!=0 && cica < butr)cout << "2010 " << beet + butr << "\n";
    else if (bee==0 && cica!=0 && beet!=0 && butr!=0)cout << "2014 " << cica+beet << "\n";
    else if (bee!=0 && cica!=0 && beet!=0 && butr!=0 && cica > butr)cout << "2017 " << bee + cica + beet << "\n";
    else if (bee!=0 && cica!=0 && beet!=0 && butr!=0)cout << "2021 " << bee + butr + beet<< "\n";
    return 0;
}
