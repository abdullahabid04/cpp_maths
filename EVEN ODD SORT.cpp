#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() 
{
	while(1)
	{
		int i,limit=100,num=5,unsorted[num],even,odd;
	
		srand(time(0)); 
	
		for(i=0;i<num;i++)
		{
			unsorted[i]=rand()%limit;
			cout<<"  "<<unsorted[i];
		}
	
		cout<<endl<<endl;
	
		for(i=0;i<num;i++)
		{
			if(unsorted[i]%2==0)
			{
				even=unsorted[i];
				cout<<"  "<<even<<" is "<<"EVEN"<<endl;
			}
			else
			{
				odd=unsorted[i];
				cout<<"  "<<odd<<" is "<<"ODD"<<endl;
			}
		}
		
		cout<<endl<<"  ";
		system("pause");
		system("cls");
	}
}
