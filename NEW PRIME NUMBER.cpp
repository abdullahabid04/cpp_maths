#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	while(1)
	{
		int num,i,x=0;
	
		srand(time(0));
		num=rand()%100;
		
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				x=1;
			}
		}
		
		if(x==0)
		{
			cout<<num<<" is a prime number "<<endl;
		}
		else
		{
			cout<<num<<" is not a prime number "<<endl;
		}
		
		system("pause");
		system("cls");
	}
}
