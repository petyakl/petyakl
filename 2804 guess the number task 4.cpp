/******************************************************************************
1. Добавете коментари, обясняващи с ваши думи какво прави всеки ред на кода.
2. Параметризирайте крайните стойности. 
Вместо фиксирани едно и сто, дайте възможност на потребителя сам да избира от колко до колко да е числото, което ще познава.
3. Създайте променлива, която брои с колко опита е познато числото, и информирайте потребителя след края на играта.
4. Създайте възможност за спиране на играта при въвеждане на числото 0

5. *По желание* Ако потребителят не познае първите пет пъти, кажете му колко кръгчета има в числото му. Пример - в 86 има 3 кръгчета
© 2021 GitHub, Inc.

*******************************************************************************/
#include <iostream>
//може да се ползват символи и функции от библиотеката
#include <cstdlib>
//може да се ползват символи и функции от библиотеката
#include <ctime>
//може да се ползват символи и функции от библиотеката
using namespace std;

int main()
//тялото на програмата
{
    srand(time(0)); 
    //seed random number generator
    int n,m;
    cout<<"Enter limit:"; cin>>m;
    cout<<"Enter minimum:"; cin>>n;
     while (n>m)
    {
        cout<<"The minimum must be lower than the limit"<<endl; 
        cout<<"min=";cin>>n;
        cout<<"max=";cin>>m;
    }
    while (n==0)
    {
        cout<<"For this program the min must be different from 0";
        cin>>n;
    }
    int num = rand() % (m-n+1) + n; 
    // random number between 1 and 100
    cout << "Guess My Number Game\n\n";
    //извежда на в програмата "Guess My Number Game\n\n"
    int guess = 0;
    //запазва се място за въвеждане на стойност на променлива с име guess и автоматично и се дава стойност 0;
    while (guess != num) 
    //цикъл while ще извършва посочените действия докато стойността на guess е различна num
    {
        cout<<"Enter a number between the limits: ";
        cin >> guess;
        //потребителя, въвежда стойност на променливата, която се запазва
        if (guess==0)
        {
            cout<<"The game automatically stopped";
            break;
        }


        if (guess > num)
        //функция която проверява дали guess > num
        {
            cout << "Too high!\n\n";
            //ако е вярно ще изведе "Too high!\n\n
        }
        else 
        //ako не вярно
        if (guess < num)
        //проверява дали guess < num
        {
         cout << "Too low!\n\n";
         //ако е вярно ще изведе "Too low!\n\n"
        }
        else
        // ако нито едно от по-горните не е вярно
        {
            cout << "\nCorrect! You got it in ";
            //извежда Correct! You got it in
        }
    }
    
//ако не е въведено правилно число цикълът ще се завърти отново, но стоиността на guess ще е 0
    return 0;
}
