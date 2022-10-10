#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin >>N;

    int factorial = 1;

    for(int i=0; i<(N-1); i++)
    {
        factorial *= (N-i);

    }

    cout<<factorial<<endl;


    return 0;
}
