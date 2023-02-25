#include<iostream>
using namespace std;

int main()
{
	int a,b,j;
	
	cout<<"Enter starting number"<<endl;
	cin>>a;
	cout<<"Enter ending number"<<endl;
	cin>>b;
	
	cout<<endl<<"-----------"<<endl<<"forward counting"<<endl<<endl;
	
	for(j=a;j<=b;j++)
	{
		cout<<"|"<<j<<"|"<<endl;
	}
	
	cout<<endl<<"-----------"<<endl<<"backward counting"<<endl<<endl;
	
	for(j=b;j>=a;j--)
	{
		cout<<"|"<<j<<"|"<<endl;
	}

}
