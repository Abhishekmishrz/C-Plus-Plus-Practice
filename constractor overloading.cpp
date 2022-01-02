#include<iostream>
using namespace std;

class complex 
{
	int x,y;
	public:
		complex(int a,int b)
		{
			x=a;
			y=b;
		}
		complex()   //default constractor
		{
			x=0;
			y=0;
		}
		complex(int a)
		{
			x=a;
			y=0;
		}
		printnumber()
		{
			cout<<"your complex number is "<<x<<"+"<<y<<"i"<<endl;
		}
};
int main()
{
	complex a(3,4);
	a.printnumber();
	complex b(3);
	b.printnumber();
	complex c;
	c.printnumber();
	return 0;
}
