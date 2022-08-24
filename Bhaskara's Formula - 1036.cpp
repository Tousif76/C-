#include<bits/stdc++.h>
using namespace std;
int main ()
{
    cout << fixed <<setprecision(5);

    double a, b, c;
    cin >> a >> b >> c;


    double temp = b*b - 4*a*c;

    if (temp < 0 || a==0)
    {
        cout << "Impossivel calcular"<<endl;
    }

    else
    {
        double r1 = (-b + sqrt(temp))/(2*a);
        double r2 = (-b - sqrt(temp))/(2*a);

        cout << "R1 = "<< r1 <<endl;
        cout << "R2 = "<< r2 <<endl;

    }

     return 0;


}
