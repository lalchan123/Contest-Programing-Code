#include<iostream>
using namespace std;

int main(){
  int n,i;
  unsigned long long fact=1;
  cout<<"Enter a integer number : ";
  cin>>n;
  if(n<0)
    cout<<"Error!Factorial doesnot exit negative number";
  else{
    for(i=1;i<=n;++i){
        fact*=i;
    }
    cout<<"Factorial of "<<n<<" = "<<fact<<endl;
  }
  return 0;
}
