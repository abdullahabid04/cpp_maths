#include<iostream>
using namespace std;

int main()
{
	int i,j,k;
	
	cout<<"FORWARD\t\tBACKWARD"<<endl<<endl;
	
	for(i=0,j=10;i<=10,j>=0;i++,j--)
	{
		cout<<i<<"\t\t"<<j<<endl<<endl;
	}
	
	cout<<"ADD\t";
	
	for(i=0,j=10;i<=10,j>=0;i++,j--)
	{
		k=i+j;
		cout<<k<<" ";
	}
}
