#include<iostream>
using namespace std;
int main ()
{
    /*
  int a,b,c;
  cin >>a>>b>>c;

  int MaiorAB = (a+b+abs(a-b))/2;
  int m = (MaiorAB+c+abs(MaiorAB-c))/2;

  cout <<m<<" eh o maior"<<endl;
  return 0;
  */

  int a,b,c;
  cin >>a>>b>>c;

  int m = max(a,max(b,c));
  cout <<m<<" eh o maior"<< endl;
  return 0;
}

