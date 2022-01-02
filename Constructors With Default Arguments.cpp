#include<iostream>
using namespace std;

class simple
{
	int data1,data2,data3;
	public:
		simple(int a,int b=9,int c=7)//this is a default constractor
		{
			data1=a;
			data2=b;
			data3=c;
		}
		printnumber()
		{
			cout<<"your no is "<<data1<<","<<data2<<" and"<<data3<<endl;
		}
};

int main()
{
	simple x(2);
	x.printnumber();
	simple y(4,5);
	y.printnumber();
	simple z(6,7,5);
	z.printnumber();
	return 0;
}
