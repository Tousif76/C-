#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int in,h,mi,s,last,sec;
    cin >>in;

    h = in/3600;
    s = in%3600;
    mi = s/60;
    last = s%60;
    sec = last;

    cout<<h<<":"<<mi<<":"<<sec<<endl;
    return 0;
}
