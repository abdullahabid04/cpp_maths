#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,i,j,k;
	float a,b,c,irad,jrad,krad;
	
	cout<<"Enter serial no. for trignometric ratio"<<endl<<endl;
	cin>>x;
	switch(x)
	{
		case(1):
		{
			cout<<endl<<endl<<"Enter angle"<<endl<<endl;
			cin>>i;
			irad=i*(3.14/180);
			a=sin(irad);
			cout<<endl<<endl<<"-----"<<endl<<endl<<a<<endl<<endl<<"-----"<<endl;
			break;
		}
		case(2):
		{
			cout<<endl<<endl<<"Enter angle"<<endl<<endl;
			cin>>j;
			jrad=j*(3.14/180);
			b=cos(jrad);
			cout<<endl<<"-----"<<endl<<endl<<b<<endl<<endl<<"-----"<<endl;
			break;
		}
		case(3):
		{
			cout<<endl<<endl<<"Enter angle"<<endl<<endl;
			cin>>k;
			krad=k*(3.14/180);
			c=tan(krad);
			cout<<endl<<"-----"<<endl<<endl<<c<<endl<<endl<<"-----"<<endl;
			break;
		}
	}
}
