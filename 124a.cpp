#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,cnt=0;
    cin>>n>>a>>b;
    for(int i=a+1;i<=n;i++){
        if((n-i)<=b)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
