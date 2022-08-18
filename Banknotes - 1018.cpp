#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int Note,Hu,Fif,Tw,Te,Fi,Two,One,Mod;
    cin>>Note;

    Hu = Note/100;
    Mod = Note%100;
    Fif = Mod/50;
    Mod = Mod%50;
    Tw = Mod/20;
    Mod = Mod%20;
    Te = Mod/10;
    Mod = Mod%10;
    Fi = Mod/5;
    Mod = Mod%5;
    Two = Mod/2;
    Mod = Mod%2;
    One = Mod/1;

    cout<<Note<<endl;
    cout<<Hu<<" nota(s) de R$ 100,00"<<endl;
    cout<<Fif<<" nota(s) de R$ 50,00"<<endl;
    cout<<Tw<<" nota(s) de R$ 20,00"<<endl;
    cout<<Te<<" nota(s) de R$ 10,00"<<endl;
    cout<<Fi<<" nota(s) de R$ 5,00"<<endl;
    cout<<Two<<" nota(s) de R$ 2,00"<<endl;
    cout<<One<<" nota(s) de R$ 1,00"<<endl;

    return 0;

}
