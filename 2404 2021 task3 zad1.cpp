/******************************************************************************
1. Да предположим, че обучението за университет е 10 000 долара тази година и се увеличава с 6% всяка година. 
След една година обучението ще бъде 10 600 долара. Напишете програма, която изчислява прогресиращата цена 
обучението за десет години и общите разходи за обучение в продължение
на четири години след десетата година.
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
   double a=10000.00;
   double sum;
   for (int i=0; i<10; i++)
   {
       a=a*106/100;
      
   }
   cout<<endl<<endl;
   sum=a*106/100;
   double money=0.00;
   for (int b=0; b<4; b++)
   {
       money=money+sum;
      
       sum=sum*106/100;
       
   }
   cout<<endl<<"Needed money:"<<money;
    return 0;
}
