#include<iostream>
using namespace std;

class point
{
	int x,y;
	public:
		point(int a,int b)
		{
			x=a;
			y=b;
		}
		displaypoint()
		{
			cout<<"your point  is ("<<x<<","<<y<<")"<<endl;
		}
};

int main()
{
	point a(4,3);
	a.displaypoint();
	point b(2,3);
	b.displaypoint();
	return 0;
}
