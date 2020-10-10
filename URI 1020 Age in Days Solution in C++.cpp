#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,rm,y=0,m=0,d=0;
    cin>>a;
    if(a>365){
        y=a/365;
        rm=a-y*365;
        m=rm/30;
        d=rm-m*30;
        cout<<y<<" ano(s)"<<endl;
        cout<<m<<" mes(es)"<<endl;
        cout<<d<<" dia(s)"<<endl;
    }else{
        m=a/30;
        d=a-m*30;
        cout<<y<<" ano(s)"<<endl;
        cout<<m<<" mes(es)"<<endl;
        cout<<d<<" dia(s)"<<endl;
    }
}
