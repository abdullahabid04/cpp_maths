#include<iostream>
#include<ctime>
#include<conio.h>
#include<cstdlib>
using namespace std;

int main() 
{
 	int N=10,i,j,k,l,m,x,max=9, a[N],b[N],as[N];
	srand(time(0));
	for(i=0;i<N;i++)
		{ 
			b[i]=rand()%max;
			a[i]=b[i];
		}
	
	for(j=0;j<N;j++)
	{
		int maxp=0;
		int max=a[0];
		for(k=0;k<N;k++)
		{
			if(a[k]>max)
			{
				maxp=k;
				max=a[k];
			}
		}
		a[maxp]=0;
		as[j]=max;	
	}
	for(l=0;l<N;l++) {cout<<" "<<b[l]<<" ";}
	cout<<endl;
	for(x=0;x<N;x++) {cout<<" "<<"*"<<" ";}
	cout<<endl;
	for(m=0;m<N;m++) {cout<<" "<<as[m]<<" ";}
}
