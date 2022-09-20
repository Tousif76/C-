#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    int aux = 0;
    int pos = 0;

    for(int i=1;i<=100;i++)
    {
        cin >>n;
        if(n>aux)
        {
            aux=n;
            pos=i;
        }
    }
    cout <<aux<<endl<<pos<<endl;

    return 0;
}
