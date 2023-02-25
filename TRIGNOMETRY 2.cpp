#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x;
	int i,j,a,b,c,d;
	float p,q,y,z,e,f,irad,jrad,arad,brad,crad,drad;
	cout<<endl<<"----------"<<endl<<"Numbers for referance"<<endl<<endl;
	cout<<"x = a for sin from 0 to 180"<<endl;
	cout<<"x = b for sin from 181 to 360"<<endl;
	cout<<"x = c for cos from 0 to 180"<<endl;
	cout<<"x = d for cos from 181 to 360"<<endl;
	cout<<"x = e for tan from 0 to 180"<<endl;
	cout<<"x = f for tan from 181 to 360"<<endl;
	cout<<"Enter serial number for trignometric ratio"<<endl;
	cin>>x;
	switch (x){
	case(1):
	{
	cout<<endl<<endl<<"----------"<<endl<<"Values of sin from 0 to 180"<<endl<<endl;
	for(i=0;i<=180;i++)
	{	
		irad=i*(3.14/180);
		p=sin(irad);
		cout<<"sin"<<(i)<<" = ";
	    cout<<(p)<<endl;
    }
    break;
    }
    case(2):
    {
    cout<<endl<<endl<<"----------"<<endl<<"Values of sin from 181 to 360"<<endl<<endl;	
    for(a=181;a<=360;a++)
	{
	   arad=a*(3.14/180);
	   q=sin(arad);
	   cout<<"sin"<<(a)<<" = ";
	   cout<<(q)<<endl;
	}
	break;    
	}
	case(3):
	{
	cout<<endl<<endl<<"----------"<<endl<<"Values of cos from 0 to 180"<<endl<<endl;
	for(j=0;j<=180;j++)
	{	
		jrad=j*(3.14/180);
		y=cos(jrad);
		cout<<"cos"<<(j)<<" = ";
	    cout<<(y)<<endl;
    }
    break;
    }
	case(4):
    {
    cout<<endl<<endl<<"----------"<<endl<<"Values of cos from 181 to 360"<<endl<<endl;	
    for(b=181;b<=360;b++)
	{
	   brad=b*(3.14/180);
	   z=cos(brad);
	   cout<<"cos"<<(b)<<" = ";
	   cout<<(z)<<endl;
	} 
	break;   
	}
	case(5):
	{
	cout<<endl<<endl<<"----------"<<endl<<"Values of tan from 0 to 180"<<endl<<endl;
	for(c=0;c<=180;c++)
	{	
		crad=c*(3.14/180);
		e=tan(crad);
		cout<<"tan"<<(c)<<" = ";
	    cout<<(e)<<endl;
    }
    break;
    }
    case(6):
    {
    cout<<endl<<endl<<"----------"<<endl<<"Values of tan from 181 to 360"<<endl<<endl;	
    for(d=181;d<=360;d++)
	{
	   drad=d*(3.14/180);
	   f=tan(drad);
	   cout<<"tan"<<(d)<<" = ";
	   cout<<(f)<<endl;
	}    
	break;
	}
}
}
