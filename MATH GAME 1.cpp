#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	int number_of_questions,number_of_wrong_questions,number_of_right_questions,num1,num2,op;
	float ans;
	char option;
	string result;
	while(1)
	{
		srand(time(0));
		num1=rand()%100;
		num2=rand()%100;
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
				number_of_questions++;
				cout<<"Enter <N> for play again and <C> for exit : ";
				cin>>option;
				switch(option)
				{
					case 'N':
						if(result == "right")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
						}
						else if(result == "wrong")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
							cout<<"The right answer is "<<num1+num2<<endl;
						}
						else
						{
							cout<<"Invalid result"<<endl;
						}
						system("pause");
						system("cls");
						break;
					case 'C':
						if(result == "right")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
						}
						else if(result == "wrong")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
							cout<<"The right answer is "<<num1+num2<<endl;
						}
						else
						{
							cout<<"Invalid result"<<endl;
						}
						cout<<endl<<endl<<endl;
						cout<<"--------------------"<<endl;
						cout<<"Final results"<<endl;
						cout<<"Total questions : "<<number_of_questions<<endl;
						cout<<"Right answers : "<<number_of_right_questions<<endl;
						cout<<"Wrong answers : "<<number_of_wrong_questions<<endl;
						system("pause");
						system("cls");
						exit(0);	
				}
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
				number_of_questions++;
				cout<<"Enter <N> for play again and <C> for exit : ";
				cin>>option;
				switch(option)
				{
					case 'N':
						if(result == "right")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
						}
						else if(result == "wrong")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
							cout<<"The right answer is "<<num1-num2<<endl;
						}
						else
						{
							cout<<"Invalid result"<<endl;
						}
						system("pause");
						system("cls");
						break;
					case 'C':
						if(result == "right")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
						}
						else if(result == "wrong")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
							cout<<"The right answer is "<<num1-num2<<endl;
						}
						else
						{
							cout<<"Invalid result"<<endl;
						}
						cout<<endl<<endl<<endl;
						cout<<"--------------------"<<endl;
						cout<<"Final results"<<endl;
						cout<<"Total questions : "<<number_of_questions<<endl;
						cout<<"Right answers : "<<number_of_right_questions<<endl;
						cout<<"Wrong answers : "<<number_of_wrong_questions<<endl;
						system("pause");
						system("cls");
						exit(0);	
				}
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
				number_of_questions++;
				cout<<"Enter <N> for play again and <C> for exit : ";
				cin>>option;
				switch(option)
				{
					case 'N':
						if(result == "right")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
						}
						else if(result == "wrong")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
							cout<<"The right answer is "<<num1*num2<<endl;
						}
						else
						{
							cout<<"Invalid result"<<endl;
						}
						system("pause");
						system("cls");
						break;
					case 'C':
						if(result == "right")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
						}
						else if(result == "wrong")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
							cout<<"The right answer is "<<num1*num2<<endl;
						}
						else
						{
							cout<<"Invalid result"<<endl;
						}
						cout<<endl<<endl<<endl;
						cout<<"--------------------"<<endl;
						cout<<"Final results"<<endl;
						cout<<"Total questions : "<<number_of_questions<<endl;
						cout<<"Right answers : "<<number_of_right_questions<<endl;
						cout<<"Wrong answers : "<<number_of_wrong_questions<<endl;
						system("pause");
						system("cls");
						exit(0);	
				}
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
				number_of_questions++;
				cout<<"Enter <N> for play again and <C> for exit : ";
				cin>>option;
				switch(option)
				{
					case 'N':
						if(result == "right")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
						}
						else if(result == "wrong")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
							cout<<"The right answer is "<<num1/num2<<endl;
						}
						else
						{
							cout<<"Invalid result"<<endl;
						}
						system("pause");
						system("cls");
						break;
					case 'C':
						if(result == "right")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
						}
						else if(result == "wrong")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
							cout<<"The right answer is "<<num1/num2<<endl;
						}
						else
						{
							cout<<"Invalid result"<<endl;
						}
						cout<<endl<<endl<<endl;
						cout<<"--------------------"<<endl;
						cout<<"Final results"<<endl;
						cout<<"Total questions : "<<number_of_questions<<endl;
						cout<<"Right answers : "<<number_of_right_questions<<endl;
						cout<<"Wrong answers : "<<number_of_wrong_questions<<endl;
						system("pause");
						system("cls");
						exit(0);	
				}
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
				number_of_questions++;
				cout<<"Enter <N> for play again and <C> for exit : ";
				cin>>option;
				switch(option)
				{
					case 'N':
						if(result == "right")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
						}
						else if(result == "wrong")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
							cout<<"The right answer is "<<num1%num2<<endl;
						}
						else
						{
							cout<<"Invalid result"<<endl;
						}
						system("pause");
						system("cls");
						break;
					case 'C':
						if(result == "right")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
						}
						else if(result == "wrong")
						{
							cout<<"You entered the "<<result<<" answer"<<endl;
							cout<<"The right answer is "<<num1%num2<<endl;
						}
						else
						{
							cout<<"Invalid result"<<endl;
						}
						cout<<endl<<endl<<endl;
						cout<<"--------------------"<<endl;
						cout<<"Final results"<<endl;
						cout<<"Total questions : "<<number_of_questions<<endl;
						cout<<"Right answers : "<<number_of_right_questions<<endl;
						cout<<"Wrong answers : "<<number_of_wrong_questions<<endl;
						system("pause");
						system("cls");
						exit(0);	
				}
				break;
			default:
				cout<<"Invalid option"<<endl;					
		}
	}
}
