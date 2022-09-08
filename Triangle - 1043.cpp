#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double a,b,c,ans;
    cin >>a>>b>>c;

    if (a<(b+c)&&b<(a+c)&&c<(a+b))
    {
        cout <<fixed<<setprecision (1)<<"Perimetro = "<<a+b+c<<endl;
    }
    else
    {
        ans = 0.5*(a+b)*c;
        cout <<fixed<<setprecision (1)<<"Area = "<<ans<<endl;
    }

    return 0;
}
