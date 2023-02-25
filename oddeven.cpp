#include <iostream>
using namespace std;

int main()
{
	while(1)
	{
		int N;
		cout<<endl;
		cout<<"-------------"<<endl<<endl;
		cout<<"Enter a No."<<endl<<endl;
		cin>>N;	
		int x = N/2;
		int y = N-(2*x);
		if (y==1)
			cout<<endl<<"*** N is ODD ***"<<endl;
		else
			cout<<endl<<"*** N is EVEN ***"<<endl;
	}
}
