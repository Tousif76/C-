#include<bits/stdc++.h>
using namespace std;
int main ()
{
        int a,b;
        cin >>a>>b;

        if (a>b)
        {
            int time = 24-(a-b);
            cout <<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
        }
        else if(a==b)
        {
            int time = 24;
            cout <<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
        }
        else
          {
              int time = b-a;
              cout <<"O JOGO DUROU "<<time<<" HORA(S)"<<endl;
          }

          return 0;

}
