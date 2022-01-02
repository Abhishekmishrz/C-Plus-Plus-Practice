#include<iostream>
using namespace std;
// call by refernce uning pointers
int sweppointer(int* a,int* b)
{
	int temp =*a;
	*a=*b;
	*b=temp;
}
// call by refernce uning refernce variables
int &sweprefernce(int &a,int &b)
{
	int temp =a;
	a=b;
	b=temp;
	return a;
}



int main()
{
	int x=4;int y=5;
	cout<<"The value of x is "<< x <<" The value of y is "<< y <<endl;
	sweppointer(&x,&y);
	cout<<"The value of x is "<< x <<"The value of y is "<< y <<endl;
	sweprefernce(x,y) = 455;
	cout<<"The value of x is "<< x <<" The value of y is "<< y <<endl;
	return 0;
}
