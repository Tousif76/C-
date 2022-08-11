#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int K;
    cin >>K;
    double L;
    cin >>L;

    double Average = (double)K/L;
    cout <<fixed<<setprecision(3)<<Average<<" km/l"<<endl;
    return 0;
}

