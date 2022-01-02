#include<iostream>
using namespace std;

class complex
{
	int a,b;
	public:
		complex(void);
		printnumber()
		{
			cout<<"YOur complex number is "<<a<<"+"<<b<<"i"<<endl;
		}
};
complex::complex()
{
	a=10;
	b=12;
}

int main()
{
	complex y ,b;
	y.printnumber();
	b.printnumber();
	return 0;
}
