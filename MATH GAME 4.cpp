#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<cstring>
#include<conio.h>
#include<windows.h>

#define cls system("cls")
#define pause system("pause")
#define delay Sleep(1000)

using namespace std;

class Game
{
	public:
		void start_game()
		{
			while(choice != 'C' && choice != 'c')
			{
				cls;
				cout<<"Press S or s to start game"<<endl;
				cout<<"Press C or c to close game"<<endl;
				cout<<"Enter your choice : ";
				switch(choice=getch())
				{
					case 'S':
					case 's':
						play_game();
						total_games++;
						break;
				}
				reset();
			}
			RESULTS();
		}
		void play_game()
		{
			cls;		
			select_level();
			cls;
			while(chances_left && target_uncompleted)
			{
				srand(time(0));
				random_number();
				check_target();
				cout<<"--------------------Current STATISTICS--------------------"<<endl;
				cout<<"Difficulty Level                        : "<<difficulty<<endl;
				cout<<"Total questions                         : "<<number_of_questions<<endl;
				cout<<"Right answers                           : "<<number_of_right_questions<<endl;
				cout<<"Wrong answers                           : "<<number_of_wrong_questions<<endl;
				cout<<"Target                                  : "<<target<<" questions"<<endl;
				cout<<"Target completed                        : "<<target_completed<<endl;
				cout<<"Right answers remain to complete target : "<<target-number_of_right_questions<<endl;
				cout<<"Chances Used                            : "<<number_of_wrong_questions<<endl;
				cout<<"Chances Left                            : "<<chances-number_of_wrong_questions<<endl;
				cout<<"----------------------------------------------------------"<<endl;
				delay;
				switch(op)
				{
					case 0:
						ADD();
						break;
					case 1:
						SUBTRACT();
						break;
					case 2:
						MULTIPLY();
						break;
					case 3:
						DIVIDE();
						break;
					case 4:
						REMAINDER();
						break;
					default:
						break;
				}
				check();
				game_over();
			}
			cls;		
			cout<<"\n\n\n\n\n\t\t\t\tGAME OVER!";
			if(chances_left)
			{
				cout<<"\n\n\t\t\t\tYOU WIN";
			}
			else
			{
				cout<<"\n\n\t\t\t\tYOU LOSE";
			}
			cout<<"\n\n\t\tPress any key to see your statistics\n\n\t\t\t";
			pause;
			cls;		
			STATISTICS();
			pause;			
		}
		void select_level()
		{
			cout<<"\n----------DIFFICULTY LEVELS----------"<<endl;
			cout<<"\n-------------------------------------"<<endl;
			cout<<"\nIn Easy Difficulty : ";
			cout<<"\n\t\tRange of 1st number 0 - 10";
			cout<<"\n\t\tRange of 2nd number 0 - 5";
			cout<<"\n\t\tTarget : Answer 10 questions right";
			cout<<"\n\t\tLose on 5 wrong answers";
			cout<<"\nIn Medium Difficulty : ";
			cout<<"\n\t\tRange of 1st number 0 - 20";
			cout<<"\n\t\tRange of 2nd number 0 - 10";
			cout<<"\n\t\tTarget : Answer 20 questions right";
			cout<<"\n\t\tLose on 4 wrong answers";
			cout<<"\nIn Hard Difficulty : ";
			cout<<"\n\t\tRange of 1st number 0 - 30";
			cout<<"\n\t\tRange of 2nd number 0 - 15";
			cout<<"\n\t\tTarget : Answer 30 questions right";
			cout<<"\n\t\tLose on 3 wrong answers";
			cout<<"\nIn Insane Difficulty : ";
			cout<<"\n\t\tRange of 1st number 0 - 40";
			cout<<"\n\t\tRange of 2nd number 0 - 20";
			cout<<"\n\t\tTarget : Answer 40 questions right";
			cout<<"\n\t\tLose on 2 wrong answers";
			cout<<"\nIn Expert Difficulty : ";
			cout<<"\n\t\tRange of 1st number 0 - 50";
			cout<<"\n\t\tRange of 2nd number 0 - 25";
			cout<<"\n\t\tTarget : Answer 50 questions right";
			cout<<"\n\t\tLose on 1 wrong answers";
			cout<<"\n-------------------------------------"<<endl;
			cout<<"\nPress E or e for Easy"<<endl;
			cout<<"\nPress M or m for Medium"<<endl;
			cout<<"\nPress H or h for Hard"<<endl;
			cout<<"\nPress I or i for Insane"<<endl;
			cout<<"\nPress X or x for Expert"<<endl;
			cout<<"\nEnter Difficulty Level : ";
			switch((difficulty_level=getch()))
			{
				case 'E':
				case 'e':
					difficulty="Easy";
					num1_limit=10;
					num2_limit=5;
					target=10;
					chances=5;
					break;
				case 'M':
				case 'm':
					difficulty="Medium";
					num1_limit=20;
					num2_limit=10;
					target=20;
					chances=4;
					break;
				case 'H':
				case 'h':
					difficulty="Hard";
					num1_limit=30;
					num2_limit=15;
					target=30;
					chances=3;
					break;
				case 'I':
				case 'i':
					difficulty="Insane";	
					num1_limit=40;
					num2_limit=20;
					target=40;
					chances=2;
					break;
				case 'X':
				case 'x':
					difficulty="Expert";
					num1_limit=50;
					num2_limit=25;
					target=50;
					chances=1;
					break;
			}
		}
		void random_number()
		{
			num1=1+rand()%num1_limit;
			num2=1+rand()%num2_limit;
			op=rand()%5;			
		}
		void ADD()
		{
			cout<<"----------------------"<<endl;
			cout<<num1<<" + "<<num2<<" = ";
			cin>>ans;
			exit_game();
			cout<<"----------------------"<<endl;
			cout<<endl;
			if(ans == num1+num2)
			{
				result = "right";
				number_of_right_questions++;
				right_addition_questions++;
			}
			else
			{
				result = "wrong";
				number_of_wrong_questions++;
				wrong_addition_questions++;
			}
			right_ans = num1+num2;
			number_of_questions++;
			addition_questions++;			
		}
		void SUBTRACT()
		{
			cout<<"----------------------"<<endl;
			cout<<num1<<" - "<<num2<<" = ";
			cin>>ans;
			exit_game();
			cout<<"----------------------"<<endl;
			cout<<endl;
			if(ans == num1-num2)
			{
				result = "right";
				number_of_right_questions++;
				right_subtraction_questions++;
			}
			else
			{
				result = "wrong";
				number_of_wrong_questions++;
				wrong_subtraction_questions++;
			}
			right_ans = num1-num2;
			number_of_questions++;
			subtraction_questions++;
		}
		void MULTIPLY()
		{
			cout<<"----------------------"<<endl;
			cout<<num1<<" * "<<num2<<" = ";
			cin>>ans;
			exit_game();
			cout<<"----------------------"<<endl;
			cout<<endl;
			if(ans == num1*num2)
			{
				result = "right";
				number_of_right_questions++;
				right_multiplication_questions++;
			}
			else
			{
				result = "wrong";
				number_of_wrong_questions++;
				wrong_multiplication_questions++;
			}
			right_ans = num1*num2;
			number_of_questions++;
			multiplication_questions++;
		}
		void DIVIDE()
		{
			while(num1<num2)
			{
				random_number();
			}
			cout<<"----------------------"<<endl;
			cout<<num1<<" / "<<num2<<" = ";
			cin>>ans;
			exit_game();
			cout<<"----------------------"<<endl;
			cout<<endl;
			if(ans == num1/num2)
			{
				result = "right";
				number_of_right_questions++;
				right_division_questions++;
			}
			else
			{
				result = "wrong";
				number_of_wrong_questions++;
				wrong_division_questions++;
			}
			right_ans = num1/num2;
			number_of_questions++;
			division_questions++;
		}
		void REMAINDER()
		{
			while(num1<num2)
			{
				random_number();			
			}
			cout<<"----------------------"<<endl;
			cout<<num1<<" % "<<num2<<" = ";
			cin>>ans;
			exit_game();
			cout<<"----------------------"<<endl;
			cout<<endl;
			if(ans == num1%num2)
			{
				result = "right";
				number_of_right_questions++;
				right_remainder_questions++;
			}
			else
			{
				result = "wrong";
				number_of_wrong_questions++;
				wrong_remainder_questions++;
			}
			right_ans = num1%num2;
			number_of_questions++;
			remainder_questions++;
		}
		void check()
		{
			if(result == "right")
			{
				cout<<"-----------------------------------"<<endl;
				cout<<"You entered the "<<result<<" answer"<<endl;
				cout<<"-----------------------------------"<<endl;			
			}
			else
			{
				cout<<"-----------------------------------"<<endl;
				cout<<"You entered the "<<result<<" answer"<<endl;
				cout<<"-----------------------------------"<<endl;
				cout<<"The right answer is "<<right_ans<<endl;
				cout<<"-----------------------------------"<<endl;
			}
			delay;
			delay;
			cls;		
		}
		void check_target()
		{
			if(number_of_right_questions == target)
			{
				target_completed = "Yes";
			}
			else
			{
				target_completed = "No";
			}
		}
		void game_over()
		{
			if(number_of_wrong_questions == chances || number_of_right_questions == target)
			{
				if(number_of_wrong_questions == chances)
				{
					chances_left = false;
				}
				if(number_of_right_questions == target)
				{
					target_uncompleted = false;
					target_completed = "Yes";
					games_won++;
				}
				else
				{
					target_completed = "No";
					games_lost++;
				}
			}
		}
		void STATISTICS()
		{
			cout<<"-------------STATISTICS-------------"<<endl;
			cout<<"------------------------------------"<<endl;
			cout<<"Traget Completed                  : "<<target_completed<<endl;
			cout<<"------------------------------------"<<endl;
			cout<<"Total questions                   : "<<number_of_questions<<endl;
			cout<<"Right answers                     : "<<number_of_right_questions<<endl;
			cout<<"Wrong answers                     : "<<number_of_wrong_questions<<endl;
			cout<<"------------------------------------"<<endl;
			cout<<"Total addition questions          : "<<addition_questions<<endl;
			cout<<"Right addition answers            : "<<right_addition_questions<<endl;
			cout<<"Wrong addition answers            : "<<wrong_addition_questions<<endl;
			cout<<"------------------------------------"<<endl;
			cout<<"Total subtraction questions       : "<<subtraction_questions<<endl;
			cout<<"Right subtraction answers         : "<<right_subtraction_questions<<endl;
			cout<<"Wrong subtraction answers         : "<<wrong_subtraction_questions<<endl;
			cout<<"------------------------------------"<<endl;
			cout<<"Total multiplication questions    : "<<multiplication_questions<<endl;
			cout<<"Right multiplication answers      : "<<right_multiplication_questions<<endl;
			cout<<"Wrong multiplication answers      : "<<wrong_multiplication_questions<<endl;
			cout<<"------------------------------------"<<endl;
			cout<<"Total division questions          : "<<division_questions<<endl;
			cout<<"Right division answers            : "<<right_division_questions<<endl;
			cout<<"Wrong division answers            : "<<wrong_division_questions<<endl;
			cout<<"------------------------------------"<<endl;	
			cout<<"Total remainder questions         : "<<remainder_questions<<endl;
			cout<<"Right remainder answers           : "<<right_remainder_questions<<endl;
			cout<<"Wrong remainder answers           : "<<wrong_remainder_questions<<endl;
			cout<<"------------------------------------"<<endl;
		}
		void RESULTS()
		{
			cls;
			cout<<"---------------FINAL RESULTS---------------"<<endl;
			cout<<"-------------------------------------------"<<endl;
			cout<<"Games played       : "<<total_games<<endl;
			cout<<"Games won          : "<<games_won<<endl;
			cout<<"Games lost         : "<<games_lost<<endl;
			cout<<"-------------------------------------------"<<endl;
			pause;
			cls;		
			exit(1);
		}
		void reset()
		{
			number_of_questions=0;
			number_of_wrong_questions=0;
			number_of_right_questions=0;
			addition_questions=0;
			subtraction_questions=0;
			multiplication_questions=0;
			division_questions=0;
			remainder_questions=0;
			wrong_addition_questions=0;
			wrong_subtraction_questions=0;
			wrong_multiplication_questions=0;
			wrong_division_questions=0;
			wrong_remainder_questions=0;
			right_addition_questions=0;
			right_subtraction_questions=0;
			right_multiplication_questions=0;
			right_division_questions=0;
			right_remainder_questions=0;
			chances_left = true;
			target_uncompleted = true;
		}
		void exit_game()
		{
			if(cin.eof())
			{
				cls;
				cin.clear();
				start_game();
			}
		}
	private:
		int num1;
		int num2;
		int op;
		int number_of_questions=0;
		int number_of_wrong_questions=0;
		int number_of_right_questions=0;
		int addition_questions=0;
		int subtraction_questions=0;
		int multiplication_questions=0;
		int division_questions=0;
		int remainder_questions=0;
		int wrong_addition_questions=0;
		int wrong_subtraction_questions=0;
		int wrong_multiplication_questions=0;
		int wrong_division_questions=0;
		int wrong_remainder_questions=0;
		int right_addition_questions=0;
		int right_subtraction_questions=0;
		int right_multiplication_questions=0;
		int right_division_questions=0;
		int right_remainder_questions=0;
		int num1_limit;
		int num2_limit;
		int total_games=0;
		int games_won=0;
		int games_lost=0;
		int target;
		int chances;
		float ans;
		float right_ans;
		bool chances_left = true;
		bool target_uncompleted = true;
		char choice;
		char difficulty_level;
		string result;
		string target_completed;
		string difficulty;
};

int main()
{
	Game game;
	game.start_game();
	return 0;
}
