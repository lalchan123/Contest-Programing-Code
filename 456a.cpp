
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   bool c=false;
   pair<int,int>a[n];
   for(int i=0;i<n;i++){
    cin>>a[i].first>>a[i].second;
   }
   sort(a,a+n);
    for(int i=0;i<n-1;i++){
    if(a[i].first<a[i+1].first&&a[i].second>a[i+1].second)
        c=true;
   }
   if(c)
    cout<<"Happy Alex\n";
   else
    cout<<"Poor Alex\n";

    return 0;

}
