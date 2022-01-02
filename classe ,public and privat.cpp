#include<iostream>
using namespace std;
class company
{
	private:
		int a,b,c;
	public :
		int d,e;
		void getdata(int a1,int b1,int c1);
		void setdata()
		{
			cout<<"This is a value of a "<<a<<endl;
			cout<<"This is a value of b "<<b<<endl;
			cout<<"This is a value of c "<<c<<endl;
			cout<<"This is a value of d "<<d<<endl;
			cout<<"This is a value of e "<<e<<endl;
		}
};
void company::getdata(int a1,int b1,int c1)
{
	a=a1;
	b=b1;
	c=c1;
}
int main()
{
	company abhi;
	abhi.d=87;
	abhi.e=45;
	abhi.getdata(2,3,4);
	abhi.setdata();
	return 0;
	
}
