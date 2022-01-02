#include<iostream>
using namespace std;
int main(void)
{
	long int fact(int);
	float power(float,int);
	float sum, temp, x, pow;
	int sign, i, n;
	long int factvalue;
    cout<<"\n please enter a value for n:"<<endl;
	cin>>n;
	
    cout<<"\n please enter a value for x:"<<endl;
	cin>>x;
	sum=x; 
	i = 3;
	sign=1;
	while(i<=n)
	{
		factvalue = fact(i);
		cout<<"\n factorial value of i ("<<i<<") is:"<<factvalue;
		pow = power(x,i);
		sign = (-1)*sign;
		temp = sign*pow/factvalue;
		sum = sum+temp;
		i = i+2;
	}
	cout<<"\n the sum of series : sum = x-x3/3!+(x5)/5!-........(xn)/n!:"<<sum;
    }
		long int fact(int max)
{
	    long int value;
	    value = 1;
		for(int i= 1; i<=max; i++)
		value = value*i;
		return (value);
}
float power(float x, int n)
	{
		float value2;
		value2 = 1;
		for (int j =1; j<=1; ++j)
		value2 = value2*j;
	}

