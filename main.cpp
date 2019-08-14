#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    float fxd,sls,sal;
    cin >> name >> fxd >> sls;
    sal = fxd + ((15.0 / 100 ) * sls);
    cout << " TOTAL = R$ " << fixed << setprecision(2) << sal <<endl;

    return 0;
}
