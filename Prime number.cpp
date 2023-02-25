#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num,i,x,y;
	cout<<"Enter a number"<<endl;
	cin>>num;
	cout<<endl<<"----------"<<endl<<endl;
	for(i=2;i<num;i++)
	{
		x=num/i;
		y=num-(i*x);
    
	if(y==0)
	{
		cout<<setw(8)<<"The No"<<setw(6)<<num<<setw(18)<<" is divisible by"<<setw(8)<<i<<endl;
	}
	else
	{
		cout<<setw(8)<<"The No"<<setw(6)<<num<<setw(18)<<" is NOT divisible by"<<setw(8)<<i<<endl;
	} 
	}   
}
