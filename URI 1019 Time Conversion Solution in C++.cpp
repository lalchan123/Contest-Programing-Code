#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r,h=0,m=0,s=0;
    cin>>n;
    r=n/60;
    if (r<60){
        m=r;
        s=n-m*60;
        cout<<h<<":"<<m<<":"<<s<<endl;
    } else if(r>60){
       h=r/60;
       m=r-h*60;
       s=n-r*60;
       cout<<h<<":"<<m<<":"<<s<<endl;
    }
}
