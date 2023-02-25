#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class math
{
	private:
		int A,B,C,D,E,a,b;
	public:
		math(int num1,int num2)
		{
			a=num1;
			b=num2;
		}
		void random()
		{
			a=rand()%100;
			b=rand()%100;
		}
		void show()
		{
			cout<<" "<<a<<" , "<<b<<endl;
		}					
		void add()
		{
			A=a+b;
		}
		void sub()
		{
			B=a-b;
		}
		void prod()
		{
			C=a*b;
		}
		void div()
		{
			D=a/b;
		}
		void mod()
		{
			E=a%b;
		}
		void output()
		{
			cout<<" "<<"ADD"<<" "<<A<<endl;
			cout<<" "<<"SUB"<<" "<<B<<endl;
			cout<<" "<<"MUL"<<" "<<C<<endl;
			cout<<" "<<"DIV"<<" "<<D<<endl;
			cout<<" "<<"MOD"<<" "<<E<<endl;
		}
		void space()
		{
			cout<<endl<<endl;
		}
};
int main()
{
	int num1,num2;
	
	srand(time(0));

	math math1(num1,num2);
	math1.random();
	math1.show();
	math1.add();
	math1.sub();
	math1.prod();
	math1.div();
	math1.mod();
	math1.output();
	math1.space();
	
	math math2(num1,num2);
	math2.random();
	math2.show();
	math2.add();
	math2.sub();
	math2.prod();
	math2.div();
	math2.mod();
	math2.output();
	math2.space();

	math math3(num1,num2);
	math3.random();
	math3.show();
	math3.add();
	math3.sub();
	math3.prod();
	math3.div();
	math3.mod();
	math3.output();
	math3.space();
	
	math math4(num1,num2);
	math4.random();
	math4.show();
	math4.add();
	math4.sub();
	math4.prod();
	math4.div();
	math4.mod();
	math4.output();
	math4.space();
}
