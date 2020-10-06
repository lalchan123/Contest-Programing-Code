#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){
    int t,len;
    char s[1000];
    cin>>t;
    while(t--)
    {
        int l=1;
        int m=2;
        cin>>s;
        len = strlen(s);
        if(len==2*l){
          cout<<"DA"<<endl;
          l=l+2;
        } else if(len==2*m){
            cout<<"NET"<<endl;
            m=m+2;
        }
    }
}
