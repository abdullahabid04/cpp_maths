#include<iostream>
#include<vector>
using namespace std;

vector <int> num;
int sum=0,N=1,i=0,x=0;

void data_clear()
{
	for(i=0;i<num.size();i++)
	{
		num.pop_back();
	}
}
int main()
{	
	while(N!=0)
	{
		cout<<" ENTER NUMBER "<<++x<<" : ";
		cin>>N;
		num.push_back(N);
		cout<<endl;
	}
	for(i=0;i<num.size();i++)
	{
		sum=sum+num[i];
	}
	cout<<" SUM OF "<<--x<<" NUMBERS IS "<<sum<<endl;
	data_clear();
}
