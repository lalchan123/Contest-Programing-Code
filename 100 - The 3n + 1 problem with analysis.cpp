#include<iostream>
using namespace std;

int main(){

   int i, j;

    while ((cin>>i>>j))
    {
        int i1 = i;
        int j1 = j;
        if ( i > j ) swap (i, j);
        int mcl= 0,cl;
        while ( i <= j )
        {
            cl = 1;
            unsigned int n=i;
            cout<<"n=i start: "<<n<<endl;
            while ( n != 1 )
            {
                if ( n % 2 == 1 ) n = 3 * n + 1;
                else n = n/2;
                cl++;
                cout<<"n: "<<n<<" cl:"<<cl<<endl;
            }

            if ( cl > mcl )
                mcl = cl;

            i++;
        }
        cout<<i1<<" "<<j1<<" "<<mcl<<endl;
    }
    return 0;
}
