#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	int i,multiples,num1,num2,num3,rem1,rem2,rem3;
	
	while(1)
	{
		srand(time(0));
		num1=rand()%50;
		num2=rand()%50;
		num3=rand()%50;
		cout<<" "<<num1<<" , "<<num2<<" , "<<num3<<endl<<endl;
		for(i=2;i<50;i++)
		{
			rem1=num1%i;
			rem2=num2%i;
			rem3=num3%i;
		
			if(rem1==0&&rem2==0&&rem3==0)
			{
				multiples=i;
				cout<<" "<<multiples<<" ";
			}
		}
		cout<<endl<<endl<<" ";
		system("pause");
		system("cls");
	}
}
