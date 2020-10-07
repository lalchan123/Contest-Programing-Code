#include<bits/stdc++.h>
using namespace std;

int main(){
  int p1,p2,pn1,pn2;
  float pp1,pp2,val;
  cin>>p1>>pn1>>pp1;
  cin>>p2>>pn2>>pp2;
  val=pn1*pp1+pn2*pp2;
  cout<<fixed;
  cout<<setprecision(2)<<"VALOR A PAGAR: R$ "<<val<<endl;

}
