#include<iostream>
using namespace std;

int main()
{
	while(1)
	{
		int num,i,x=0;
	
		cout<<"  ENTER A NUMBER  "<<endl<<"  ";
		cin>>num;
	
		if(num>0)
		{
			cout<<endl<<"  "<<num<<"  is positive  "<<endl;
		}
		else
		{
			cout<<endl<<"  "<<num<<" is negative  "<<endl;
		}
		
		if (num%2==0)
		{
			cout<<endl<<"  "<<num<<" is even  "<<endl;
		}
		else
		{
			cout<<endl<<"  "<<num<<" is odd  "<<endl;
		}
		
		if(num>0)
		{
			for(i=2;i<num;i++)
			{
				if(num%i==0)
				{
					x=1;
				}
			}
		
			if(x==0)
			{
				cout<<endl<<"  "<<num<<"  is a prime number  "<<endl;
			}
			else
			{
				cout<<endl<<"  "<<num<<"  is not a prime number  "<<endl;
			}
		}
		else
		{
			for(i=-2;i>num;i--)
			{
				if(num%i==0)
				{
					x=1;
				}
			}
		
			if(x==0)
			{
				cout<<endl<<"  "<<num<<"  is a prime number  "<<endl;
			}
			else
			{
				cout<<endl<<"  "<<num<<"  is not a prime number  "<<endl;
			}

		}
		cout<<endl<<endl<<"  ";
		
		system("pause");
		system("cls");	
	}
}
