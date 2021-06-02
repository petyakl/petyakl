/*************************************************************************** 


крави и бикове

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
  int n;
  char a, b;
  cout<<"Number of lines:"; cin>>n;
  cout<<"Simbols:"; cin>>a;
  cout<<"Turn:"; cin>>b;
  
  if(b=='/')
  {
  for(int i=0; i<n/2; i++)
  {
      for(int k=n/2; k>i; k--)
      {
          cout<<" ";
      }
      cout<<a;
      cout<<endl;
  };
  
    for(int j=0; j<=n/2; j++)
    {
        cout<<a;
    };
    cout<<endl;
    for(int i=0; i<n/2; i++)
  {
      for(int k=i; k<n/2-1; k++)
      {
          cout<<" ";
      }
      cout<<a;
      cout<<endl;
  };
  };
  

   if() 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  return 0;  
}