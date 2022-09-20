#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N,i;
    cin >>N;

    for(i=1;i<=10;i++)
    {
        int Multiply = i*N;
        cout <<i<<" x "<<N<<" = "<<Multiply<<endl;
    }
    return 0;
}
