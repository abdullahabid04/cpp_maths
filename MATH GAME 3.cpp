#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<string.h>
#include<conio.h>
#include<windows.h>

#define pause system("pause")
#define clear system("cls")
#define delay Sleep(1000)

using namespace std;

int TotalQuestions = 0;
int RightAnswers = 0;
int WrongAnswers = 0;

class Game
{
	public:
		Game(int num1,int num2) : number1(num1),number2(num2) {}
		
		void random_number()
		{
			number1 = rand() % 50;
			number2 = rand() % 25;
		}
		
		void ADD()
		{
			cout<<number1<<" + "<<number2<<" = ";
			cin>>answer;
		}
		
		void SUBTRACT()
		{
			cout<<number1<<" - "<<number2<<" = ";
			cin>>answer;
		}
		
		void MULTIPLY()
		{
			cout<<number1<<" * "<<number2<<" = ";
			cin>>answer;
		}
		
		void DIVIDE()
		{
			cout<<number1<<" / "<<number2<<" = ";
			cin>>answer;
		}
		
		void REMAINDER()
		{
			cout<<number1<<" % "<<number2<<" = ";
			cin>>answer;
		}
		
		string check()
		{
			switch(operator_number)
			{
				case 0:
					right_answer = number1 + number2;
					break;
				case 1:
					right_answer = number1 - number2;
					break;
				case 2:
					right_answer = number1 * number2;
					break;
				case 3:
					right_answer = number1 / number2;
					break;
				case 4:
					right_answer = number1 % number2;
					break;
				default:
					cout<<"Invalid operator number";
			}
			
			if(answer == right_answer)
			{
				RightAnswers++;
				result = "Right";
			}
			else
			{
				WrongAnswers++;
				result = "Wrong";
			}
			
			return result;			
		}

	private:
		int number1,number2;
		int operator_number;
		int answer,right_answer;
		string result;
};

int main()
{
	int num1,num2;
	int operator_number;
	bool chances_left = true;
	char choice;
	string result;
	
	Game game(num1,num2);
	
	while(choice != 'E' || choice != 'e')
	{
		while(chances_left)
		{
			srand(time(0));
					
			operator_number = rand() % 5;
			
			game.random_number();
						
			switch(operator_number)
			{
				case 0:
					game.ADD();
					break;
				case 1:
					game.SUBTRACT();
					break;
				case 2:
					game.MULTIPLY();
					break;
				case 3:
					game.DIVIDE();
					break;
				case 4:
					game.REMAINDER();
					break;
				default:
					cout<<"Invalid operator number";
			}
			
			TotalQuestions++;
			game.check();
			
			delay;
			clear;
			
			if(WrongAnswers == 3)
			{
				chances_left = false;
			}
		}
	}
}
