#include<bits/stdc++.h>
using namespace std;

int main(){
   string n;
   double s,sel,b,total;
   cin>>n>>s>>sel;
   b=sel*.15;
   total=s+b;
   //cout<<fixed;
   //cout<<setprecision(2)<<"TOTAL = R$ "<<total<<endl;
   printf("TOTAL = R$ %.2lf\n",total);
}
