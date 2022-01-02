#include<iostream>
#include<cmath>
using namespace std;

class point
{
	int x1,y1,x2,y2, result;
	public:
		float distance(void);
		point(int a,int b,int c,int d)
		{
			x1=a;
			y1=b;
			x2=c;
			y2=d;
		}
		displaypoint()
		{
			cout<<"your point  is ("<<x1<<","<<y1<<")"<<"("<<x2<<","<<y2<<")"<<endl;
		}
};
float point::distance()
{
	result=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout<<"This is a distance between two points  "<<result;
}
int main()
{
	point a(3,4,4,3);
	a.displaypoint();
	a.distance();
	return 0;
}
