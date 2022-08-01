#include<bits/stdc++.h>
using namespace std;
int main ()
{

        double A,B, M=0;
        cin >>A>>B;

        A = A*3.5;
        B = B*7.5;

        M = (A+B)/(3.5+7.5);

        cout <<"MEDIA = "<< fixed << setprecision(5) << M << endl;
        return 0;


}
