#include<iostream>
using namespace std;

int main()
{
	int a[3],as[3];
	
		a[0]=1;
		a[1]=8;
		a[2]=9;
		a[3]=7;
		
	if(a[0]<a[1])
	{
		as[0]=a[0];
		if(a[1]<a[2])
		{
			as[1]=a[1];
			if(a[2]<a[3])
			{
				as[2]=a[2];
				as[3]=a[3];
			}
			else // a[2] > a[3]
			{
				as[3]=a[2];
				as[2]=a[3];
			}
		}
		else // a[1] > a[2]
		{
			if(a[1]<a[3])
			{
				as[2]=a[1];
				if(a[2]<a[3])
				{
					as[2]=a[2];
					as[3]=a[3];
				}
				else
				{
					as[2]=a[3];
					as[3]=a[2];
				}
			}
			else // a[1] > a[3]
			{
				as[3]=a[1];
				if(a[2]<a[3])
				{
					as[1]=a[2];
					as[2]=a[3];
				}
				else
				{
					as[1]=a[3];
					as[2]=a[2];
				}
				//as[1]=a[2];
			}
		}
	}
	else // a[0] > a[1]
	{
		if(a[0]<a[2])
		{
			as[2]=a[0];
			as[3]=a[3];
		}
		else
		{
			as[3]=a[0];
		}
	}
cout<<" "<<as[0]<<" "<<as[1]<<" "<<as[2]<<" "<<as[3]<<endl;
}

