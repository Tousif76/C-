#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double A,B,C;
    cin >>A>>B>>C;

    double pi = 3.14159;
    double T = 0.5*A*C;
    double Ci = pi*C*C;
    double Tra = (A+B)/2*C;
    double Q = B*B;
    double Rec = A*B;

    cout<<fixed<<setprecision (3)<<"TRIANGULO: "<<T<<endl;
    cout<<fixed<<setprecision (3)<<"CIRCULO: "<<Ci<<endl;
    cout<<fixed<<setprecision (3)<<"TRAPEZIO: "<<Tra<<endl;
    cout<<fixed<<setprecision (3)<<"QUADRADO: "<<Q<<endl;
    cout<<fixed<<setprecision (3)<<"RETANGULO: "<<Rec<<endl;

    return 0;




}
