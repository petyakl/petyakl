/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*************************************************************************** 
Проблема в кода е че започва да променя отделните цифри на въведеното число.



*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>// random_shuffle
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    cout<<"Welcome to bulls and cows. In this game, the computer will randomly generate a four-digit number, with different digits, and you will have to guess it. ";
    cout<<"To achieve that you will have to put in your initial guess and the computer will show you how many cows and bulls does your guess nave.";
    cout<<"A cow means that you have guessed a digit but it isn't on the right place and a bull means that you have guessed a digit and it is on the right place";
   cout<<endl<<"give up: 0000";
   cout<<endl<<endl<<endl;
    srand(unsigned(time(0)));
    int a=0;
    int nums[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    random_shuffle(nums, nums + 9);
    for(int i=0; i<9; i++)
    {
        a=a*10+nums[i];
    };
    int number;
    number=a%10000;
 
    cout<<endl;
    int n[4];
    n[0]=number%10;
    n[1]=number/10%10;
    n[2]=number/100%10;
    n[3]=number/1000%10;
    bool flag=0;
    int brtrys=1;
    int guess;
    cout<<"Your guess is: ";cin>>guess;
    char p='p';
   
    while(guess!=number)
    {
        int brbull=0;
        int brcow=0;
        
        int g[4];
        g[0]=guess%10;
        g[1]=guess/10%10;
        g[2]=guess/100%10;
        g[3]=guess/1000%10;
        
        for(int i=0; i<4; i++)
        {
            if(g[i]==n[i])
            {
                brbull++;
            }
            else
            {
               for(int k=0; k<4; k++)
               {
                  if(g[i]==n[k])
                  {
                      brcow++;
                  }
               }
            };
        }
        if(brcow>0)
        cout<<"The number of cows you have is: "<<brcow<<endl;
        else
        cout<<"You don't have any cows."<<endl;
        if(brbull>0)
        cout<<"The number of bulls you have is: "<<brbull<<endl;
        else
        cout<<"You don't have any bulls."<<endl;
         cout<<"Your guess is: ";
         cin>>guess;
         brtrys++;
        if (guess==number)
        {
            flag=true;
            break;
        }
        if(guess==0000)
        {
            cout<<"You choose to give up. The number you were looking for is:"<<number;
            break;
            
        }
        
        if(guess==5555)
        {
            cout<<endl<<"Here is the first digit:"<<n[3]<<endl;
        }
        if(brtrys==5)
        {
            cout<<"It looks like you are having a hard time. I can help you. Write '5555' the next time you have to input a guess. I'm going to give you the first digit."<<endl;
        }
    }
    
    if(flag==true)
  cout<<"You guessed the number!";

return 0;
}
