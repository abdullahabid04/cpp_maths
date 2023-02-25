#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() 
{
	int rem1,rem,i=0,j=0,k=0,x=0,y=0,num=9,unsorted[num],even[j],odd[k];
	srand(time(0)); 
	for(i=0;i<=num;i++)
	{
		unsorted[i]=rand()%10;
		cout<<"  "<<unsorted[i];
	}
	cout<<endl<<endl;
	
	k=0;
	for(i=0;i<=num;i++)
	{
		rem1=unsorted[i]/2;
		rem=unsorted[i]-(2*rem1);
		if(rem==1)
		{
			odd[k]=unsorted[i];
			k=k+1;
		}
	}
	
	j=0;
	for(i=0;i<=num;i++)
	{
		rem1=unsorted[i]/2;
		rem=unsorted[i]-(2*rem1);
		if(rem==0)
		{
			even[j]=unsorted[i];
			j=j+1;
		}
	}
	
	
	x=j-1;
	y=k-1;
	cout<<endl<<endl<<"  ";
	cout<<"EVEN";
	//even[j]=0;
	for(int c=0;c<=x;c++)
	{
		cout<<"  "<<even[c]<<"  ";
	}
	cout<<endl<<endl<<"  ";
	cout<<"ODD ";
	//odd[k]=0;
	for(int d=0;d<=y;d++)
	{
		cout<<"  "<<odd[d]<<"  ";
	}
	return 0;
}
