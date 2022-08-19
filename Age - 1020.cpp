#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int Days,Yr,Mon,Dys,Mod;
    cin >> Days;

    Yr = Days/365;
    Mod = Days%365;
    Mon = Mod/30;
    Mod = Mod%30;
    Dys = Mod;

    cout<<Yr<<" ano(s)"<<endl;
    cout<<Mon<<" mes(es)"<<endl;
    cout<<Dys<<" dia(s)"<<endl;

    return 0;

}
