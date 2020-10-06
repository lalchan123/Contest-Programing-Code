#include <iostream>
using namespace std;

int main(){
    signed a,b;
    signed sum=0;
    cin>>a>>b;
    if(a%2==0){
        cout<<a<<" is even"<<endl;
        sum=sum+a;
    }
    if(a%2!=0){
        cout<<a<<" is odd"<<endl;
        sum=sum-a;
    }
    if(b>0){
        cout<<b<<" is greater than zero"<<endl;
        sum=sum+b;
    }
    if(b<0){
        cout<<b<<" is less than zero"<<endl;
        sum=sum-b;
    }
    if(b==0){
        cout<<b<<" is equal to zero"<<endl;
        sum=sum*b;
    }
    signed x=a+b;
    cout<<"after adding,a+b is equal to "<<x<<endl;
    if(((a+b)%2)==0){
        sum=sum+(a+b);
        cout<<"after adding "<<a<<" "<<b<<" sum is equal to "<<sum<<endl;

    }if(((a+b)%2)!=0){
        sum=sum-(a+b);
        cout<<"after removing "<<a<<" "<<b<<" sum is equal to "<<sum<<endl;

    }if((a+b)==0){
        sum=sum*10;
        cout<<"the result after multiplying sum = "<<sum<<endl;

    }
    sum=sum*5;
    cout<<"THE ULTIMATE RESULT = "<<sum<<endl;
    cout<<"I wanna be a national contestant and I can write long code"<<endl;

}
