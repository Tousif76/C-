#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string name;
    double s, m, n;
    cin >> name>>s>>m;
    n = s + (m*15)/100;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << n << endl;
    return 0;


}
