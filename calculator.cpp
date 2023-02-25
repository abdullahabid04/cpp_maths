#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"Enter operator number"<<endl;
	cin>>x;	
	if(x==1)
	{
	   	int a,N[a],count,sum=0;
	   	
		cout<<"  ----------  "<<endl<<"  ";
		cout<<"Enter number count  :  ";
		cin>>count;
	
		for(a=1;a<count;a++)
		{
			cout<<"  ----------  "<<endl<<"  ";
			cout<<"Enter number  "<<a<<"  :  ";
			cin>>N[a];
			sum=sum+N[a];
		}	
		cout<<endl<<"  TOTAL  =  "<<sum<<endl;
    }
	else if(x==2)
	{
	   	int b,N[b],count,sub=0;
	   	
		cout<<"  ----------  "<<endl<<"  ";
		cout<<"Enter number count  :  ";
		cin>>count;
	
		for(b=1;b<count;b++)
		{
			cout<<"  ----------  "<<endl<<"  ";
			cout<<"Enter number  "<<b<<"  :  ";
			cin>>N[b];
			sub=sub-N[b];
		}	
		cout<<endl<<"  TOTAL  =  "<<sub<<endl;
    }
	else if(x==3)
	{
	   	int c,N[c],count,mul=1;
	   	
		cout<<"  ----------  "<<endl<<"  ";
		cout<<"Enter number count  :  ";
		cin>>count;
	
		for(c=1;c<count;c++)
		{
			cout<<"  ----------  "<<endl<<"  ";
			cout<<"Enter number  "<<c<<"  :  ";
			cin>>N[c];
			mul=mul*N[c];
		}	
		cout<<endl<<"  TOTAL  =  "<<mul<<endl;
	}   
	else if(x==4)
	{
	   	int d,N[d],count;
	   	float div=1;
	   	
		cout<<"  ----------  "<<endl<<"  ";
		cout<<"Enter number count  :  ";
		cin>>count;
	
		for(d=1;d<count;d++)
		{
			cout<<"  ----------  "<<endl<<"  ";
			cout<<"Enter number  "<<d<<"  :  ";
			cin>>N[d];
			div=N[d]/div;
		}	
		cout<<endl<<"  TOTAL  =  "<<div<<endl;
	}
}
