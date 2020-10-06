#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(n%2==0){
            n= 3*n+1;
            cout<<n<<endl;
        }else{
            n=n/2;
            cout<<n<<endl;
        }
    }


}
