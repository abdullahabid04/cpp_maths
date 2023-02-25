#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

vector <int> even,odd;

void data_clearing_even()
{
	for(int j=0;j<even.size();j++)
	{
		even.pop_back();
	}
}

void data_clearing_odd()
{
	for(int k=0;k<odd.size();k++)
	{
		odd.pop_back();
	}
}

int main() 
{
	int i=0,j=0,k=0,n=19,rem,rem1,unsorted[n+1];
	
	srand(time(0)); 
	for(i=0;i<=n;i++)
	{
		unsorted[i]=rand()%10;
		cout<<"  "<<unsorted[i];
	}
	
	cout<<endl<<endl;
	
	for(i=0;i<=n;i++)
	{
		rem=unsorted[i]/2;
		rem1=unsorted[i]-(2*rem);
		
		if(rem1==0)
		{
			even.push_back(unsorted[i]);
		}
		else
		{
			odd.push_back(unsorted[i]);
		}
	}
	
	cout<<endl<<endl<<"  "<<"EVEN"<<"  ";
	
	for(j=0;j<even.size();j++)
	{
		cout<<even[j]<<"  ";
	}
	
	cout<<endl<<endl<<"  "<<"ODD"<<"  ";
	
	for(k=0;k<odd.size();k++)
	{
		cout<<odd[k]<<"  ";
	}

	data_clearing_even();
	data_clearing_odd();
	
	return 0;
}
