#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double fst,scnd,thd,frth,last,avg;
    cin>>fst>>scnd>>thd>>frth;
    avg = (fst*2+scnd*3+thd*4+frth*1)/10;
    cout << fixed;
    cout <<setprecision (1)<<"Media: "<<avg<<endl;

    if (avg>=7)
    {
        cout<<"Aluno aprovado."<<endl;
    }

    else if (avg>=5&&avg<=6.9)
    {
        cout<<"Aluno em exame."<<endl;
        cin >>last;
        cout << setprecision (1)<<"Nota do exame."<<last<<endl;

    if(((avg+last)/2)>=5)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if (((avg+last)/2)<5)
    {
        cout<<"Aluno reprovado."<<endl;
    }

    cout<<setprecision (1)<<"Media final: "<<((avg+last)/2)<<endl;
}

 else
    {
        cout<<"Aluno reprovado."<<endl;

    }


    return 0 ;

    }
