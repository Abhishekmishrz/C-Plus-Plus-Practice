#include<iostream>
using namespace std;
int fab(int n)
{
	if (n<=1)
	{
		return 1;
	
	}
	return fab(n-2)+fab(n-1);
}
long double factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	return n*factorial(n-1);
}
int main()
{
	int n;
	cout<<" Enter the number from keyboard-: ";
	cin>>n;
	cout<<" The factorial of "<<n<<" is "<<factorial(n)<<endl;
	cout<<" The faboonchi sequence of "<<n<<" is "<<fab(n)<<endl;
	return 0;
	
}
