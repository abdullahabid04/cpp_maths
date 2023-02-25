#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void game()
{
	int number_of_questions=0;
	int number_of_wrong_questions=0;
	int number_of_right_questions=0;
	int num1;
	int num2;
	int op;
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
	float ans,right_ans;
	bool chances_left = true;
	char option;
	string result;
	
	while(chances_left)
	{
		srand(time(0));

		num1=rand()%50;
		num2=rand()%25;
		op=rand()%5;
		
		switch(op)
		{
			case 0:
				cout<<num1<<" + "<<num2<<" = ";
				cin>>ans;
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
				break;
			case 1:
				cout<<num1<<" - "<<num2<<" = ";
				cin>>ans;
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
				break;
			case 2:
				cout<<num1<<" * "<<num2<<" = ";
				cin>>ans;
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
				break;
			case 3:
				while(num1<num2)
				{
					num1=rand()%50;
					num2=rand()%25;
				}
				cout<<num1<<" / "<<num2<<" = ";
				cin>>ans;
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
				break;
			case 4:
				while(num1<num2)
				{
					num1=rand()%50;
					num2=rand()%25;
				}
				cout<<num1<<" % "<<num2<<" = ";
				cin>>ans;
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
				break;
			default:
				cout<<"Invalid option"<<endl;					
		}
		
		if(result == "right")
		{
			cout<<"You entered the "<<result<<" answer"<<endl;
		}
		else if(result == "wrong")
		{
			cout<<"You entered the "<<result<<" answer"<<endl;
			cout<<"The right answer is "<<right_ans<<endl;
		}
		else
		{
			cout<<"Invalid result"<<endl;
		}
		
		system("pause");		
		system("cls");
		
		if(number_of_wrong_questions == 3)
		{
			chances_left = false;
		}
	}
	cout<<"-------------STATISTICS-------------"<<endl;
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
	
	system("pause");
	system("cls");
}

int main()
{
	while(1)
	{
		game();
	}
}
