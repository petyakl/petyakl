/******************************************************************************
Напишете програма, която играе популярната игра камък-ножица-рок-хартия. (Ножица може да отреже хартия, камък може да счупи ножица и хартия
да увие камъкѝ.) Програмата генерира произволно число 0, 1 или 2, представляващо ножица, скала и хартия. Програмата подканва потребителя да въведе число 0, 1 или
2 и показва съобщение, показващо дали потребителят или компютърът печели, губи, или има равен резултат. Ето примерни изпълнения:

scissor (0), rock (1), paper (2): 1
The computer is scissor. You are rock. You won

scissor (0), rock (1), paper (2): 2
The computer is paper. You are paper too. It is a draw

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
     srand(time(0)); //seed random number generator
    int num = rand() % 3; // random number between 1 and 100
    int Ch;
    int scissor=0;
    int rock=1;
    int paper=2;
    cout<<"scissor (0), rock (1), paper (2):"; cin>>Ch; 
    cout<<endl;
    
    if(num==0)
    {
        cout<<"The computer is scissor.";
    };
    if (num==1)
    {
        cout<<"The computer is rock.";
    };
    if (num==2)
    {
        cout<<"The computer is paper.";
    };
    
    
    if(Ch==0)
    {
        cout<<"You are scissor.";
    };
    if (Ch==1)
    {
        cout<<"You are rock.";
    };
    if (Ch==2)
    {
        cout<<"You are paper.";
    };
    if((num==1 && Ch==0) || (num==0 && Ch==2) || (num==2 && Ch==1) )
    cout<<"You lost.";
    
    if((num==0 && Ch==1) || (num==1 && Ch==2) || (num==2 && Ch==0) )
    cout<<"You won.";
    
    if((num==0 && Ch==0) || (num==1 && Ch==1) || (num==2 && Ch==2) )
    cout<<"It is draw.";
    
    return 0;
}
