#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if((5-a[i])>=k)
            cnt++;
    }
    cout<<cnt/3<<endl;

    return 0;
}
