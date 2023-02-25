#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	int number_of_questions=0,number_of_wrong_questions=0,number_of_right_questions=0,right_ans,num1,num2,op;
	float ans;
	char option;
	string result;
	while(1)
	{
		srand(time(0));
		num1=rand()%50;
		num2=rand()%25;
		op=rand()%4;
		
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
				}
				else if(ans != num1+num2)
				{
					result = "wrong";
					number_of_wrong_questions++;
				}
				else
				{
					cout<<"Answer not entered"<<endl;
				}
				right_ans = num1+num2;
				number_of_questions++;
				break;
			case 1:
				cout<<num1<<" - "<<num2<<" = ";
				cin>>ans;
				cout<<endl;
				if(ans == num1-num2)
				{
					result = "right";
					number_of_right_questions++;
				}
				else if(ans != num1-num2)
				{
					result = "wrong";
					number_of_wrong_questions++;
				}
				else
				{
					cout<<"Answer not entered"<<endl;
				}
				right_ans = num1-num2;
				number_of_questions++;
				break;
			case 2:
				cout<<num1<<" * "<<num2<<" = ";
				cin>>ans;
				cout<<endl;
				if(ans == num1*num2)
				{
					result = "right";
					number_of_right_questions++;
				}
				else if(ans != num1*num2)
				{
					result = "wrong";
					number_of_wrong_questions++;
				}
				else
				{
					cout<<"Answer not entered"<<endl;
				}
				right_ans = num1*num2;
				number_of_questions++;
				break;
			case 3:
				cout<<num1<<" / "<<num2<<" = ";
				cin>>ans;
				cout<<endl;
				if(ans == num1/num2)
				{
					result = "right";
					number_of_right_questions++;
				}
				else if(ans != num1/num2)
				{
					result = "wrong";
					number_of_wrong_questions++;
				}
				else
				{
					cout<<"Answer not entered"<<endl;
				}
				right_ans = num1/num2;
				number_of_questions++;
				break;
			case 4:
				cout<<num1<<" % "<<num2<<" = ";
				cin>>ans;
				cout<<endl;
				if(ans == num1%num2)
				{
					result = "right";
					number_of_right_questions++;
				}
				else if(ans != num1%num2)
				{
					result = "wrong";
					number_of_wrong_questions++;
				}
				else
				{
					cout<<"Answer not entered"<<endl;
				}
				right_ans = num1%num2;
				number_of_questions++;
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
		cout<<"Enter <N> for play again and <C> for exit : ";
		cin>>option;
		switch(option)
		{
			case 'N':
				system("pause");
				system("cls");
				break;
			case 'C':
				cout<<endl<<endl<<endl;
				cout<<"--------------------"<<endl;
				cout<<"Final results"<<endl;
				cout<<"Total questions : "<<number_of_questions<<endl;
				cout<<"Right answers : "<<number_of_right_questions<<endl;
				cout<<"Wrong answers : "<<number_of_wrong_questions<<endl;
				system("pause");
				system("cls");
				cout<<"GOODBYE"<<endl;
				cout<<"Please play this game again"<<endl;
				cout<<"Please <LIKE> <SHARE> and <SUBSCRIBE> and click the <BELL> icon"<<endl;
				exit(0);	
		}
	}
}
