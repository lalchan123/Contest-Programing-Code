#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c(0), m(0);
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        c -= a;
        c += b;
        if (c > m)
        {
            m = c;
        }
    }

    cout<<m<<endl;
    return 0;
}
