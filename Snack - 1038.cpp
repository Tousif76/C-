#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float x,y;
    cin >> x >> y;

    float x1=4.00, x2=4.50, y1=5.00, y2=2.00, z1=1.50, ans;

    if (x==1)
    {
        ans = x1*y;
    }
    else if (x==2)
    {
        ans = x2*y;
    }
    else if (x==3)
    {
        ans = y1*y;
    }
    else if (x==4)
    {
        ans = y2*y;
    }
    else if (x==5)
    {
        ans = z1*y;
    }

    cout << fixed << setprecision (2) << endl;
    cout << "Total: R$ "<<ans<<endl;

    return 0;





}
