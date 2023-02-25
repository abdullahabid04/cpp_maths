#include<iostream>
using namespace std;

int main()
{
	while(1)
	{
		int a,b,j,x;
		cout<<endl<<"      ------------------------------------------------------------   "<<endl;
		cout<<"      Enter table number   "<<endl;
		cout<<"      ";
		cin>>a;
		cout<<endl<<"      ------------------------------------------------------------   "<<endl;
		cout<<"      Enter ending table number   "<<endl;
		cout<<"      ";
		cin>>b;
		cout<<endl<<"      ------------------------------------------------------------   "<<endl<<"      Table of required number   "<<endl<<endl;
		for(j=1;j<=b;j++)
		{
			x=a*j;
			cout<<endl<<"      -------------------------------------------   "<<endl;
			cout<<"      |   "<<a<<"   |   "<<"*   |   "<<j<<"   |   =   "<<"|   "<<x<<"   |   ";
			cout<<endl<<"      -------------------------------------------   "<<endl;
		}
			system("pause");
			system("cls");
	}
}
