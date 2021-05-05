/******************************************************************************
3. Преразгледайте Lottery.cpp, за да генерирате лотария от трицифров номер без повтарящи се цифри. Програмата подканва потребителя да въведе трицифрено число и
определя дали потребителят печели съгласно следните правила:
  a. Ако потребителският вход съвпада с номера на лотарията в точния ред, наградата е
10 000 долара.
  b. Ако всички цифри в потребителския вход съвпадат с всички цифри в лотарийния номер,
наградата е $ 3000.
  c.*по желание* Ако две цифри в потребителския вход съвпадат с две цифри в лотарийния номер, наградата е
2000 долара.
  d. Ако поне една цифра в потребителския вход съвпада с цифра в лотарийния номер, наградата е
1000 долара.
*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>    // random_shuffle
using namespace std;

int main() 
{
    int a=0;
    int nums[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    random_shuffle(nums, nums + 9);
    for(int i=0; i<9; i++)
    {
        a=a*10+nums[i];
    };
    int lottery=a%1000;
	cout << "Enter your lottery pick (three digits): ";
	int guess = 0;// enter a guess
	cin >> guess;
	// Get digits from lottery
	int lotteryDigit1 = lottery / 100;
	int lotteryDigit2 = lottery /10%100;
	int lotteryDigit3 = lottery % 10;

	// Get digits from guess
	int guessDigit1 = guess / 100;
	int guessDigit2 = guess /10% 10;
	int guessDigit3 = guess % 10;
	cout << "The lottery number is " << lottery << endl;
	// Check the guess
	if (guess == lottery){
		cout << "Exact match: you win $10,000";
	}
	else if ((guessDigit2 == lotteryDigit1 || guessDigit2 == lotteryDigit3) && (guessDigit1 == lotteryDigit2 || guessDigit1 == lotteryDigit3) && (guessDigit3 == lotteryDigit2 || guessDigit3 == lotteryDigit1))
	{
		cout << "Match all digits: you win $3,000";
	}
	else if (guessDigit1 == lotteryDigit1 
	|| guessDigit1 == lotteryDigit2
	|| guessDigit1 == lotteryDigit3
	|| guessDigit2 == lotteryDigit1
	|| guessDigit2 == lotteryDigit2
	|| guessDigit2 == lotteryDigit3
	|| guessDigit3 == lotteryDigit3
	|| guessDigit3 == lotteryDigit1
	|| guessDigit3 == lotteryDigit2
	)
	{
		cout << "Match one digit: you win $1,000";
	}
	else{
		cout << "Sorry, no match";
	}
}