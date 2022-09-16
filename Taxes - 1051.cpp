#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double sal;

    cin >>sal;

    //cout <<fixed<<setprecision(2)<<endl;

    if (sal<=2000.00)
    {
        cout<< "Isento"<<endl;
    }

    else if (sal>=2000.01 && sal<=3000.00)
    {
        double taxes = (sal-2000.00)*0.08;
        cout<<fixed<<setprecision(2)<<"R$ "<<taxes<<endl;
    }

    else if (sal>=3000.01 && sal<=4500.00)
    {
            double taxes = ((sal-3000.00)*0.18 + (1000*0.08));
            cout<<fixed<<setprecision(2)<<"R$ "<<taxes<<endl;
    }
    else if (sal>=4500.00)
    {
        double taxes = ((sal-4500.00)*0.28 + (1500*0.18) + (1000*0.08));
        cout<<fixed<<setprecision(2)<<"R$ "<<taxes<<endl;
    }

    return 0;


}
