/******************************************************************************

2. За вход от 5 до 15, създайте следната програма
Enter the number of lines: 7
7 6 5 4 3 2 1 2 3 4 5 6 7
6 5 4 3 2 1 2 3 4 5 6
5 4 3 2 1 2 3 4 5
4 3 2 1 2 3 4
3 2 1 2 3
2 1 2
1

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number of lines:"; cin>>a;

   
        for(int q=a; q>=1; q--)
        {
            int k=q;
            while(k>1)
            {
                cout<<k;
                k=k-1;
            };
            if(k==1)
            {
                for(int u=1; u<=q; u++)
                cout<<u;
            };
            cout<<endl;
        }
    
    
    return 0;
}
