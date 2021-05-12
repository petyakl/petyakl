/******************************************************************************

3. За вход от 5 до 15, създайте следната програма
Enter the number of lines: 7
 * * * * * * *
   * * * * * *
     * * * * *
       * * * *
         * * *
           * *
             *
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the number of lines:"; cin>>a;
    for(int i=0; i<a; i++)
    {
        for(int w=0; w<i; w++)
        {
            cout<<" ";
        }
        for(int k=0; k<a-i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
