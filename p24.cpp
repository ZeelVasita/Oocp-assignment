//WAP to create a calculator that performs all basic arithmetic operations and displays the result.
#include<iostream>
using namespace std;

int main()
{
	char op;
	double n1,n2,result;
	
	cout<<"Enter first number:";
	cin>>n1;
	
	cout<<"Enter an Operator(+,-,*,/):";
	cin>>op;
	
	cout<<"Enter second number:";
	cin>>n2;
	
	if(op=='+')
	{
		result=n1+n2;
	}
	else if(op=='-')
	{
		result=n1-n2;
	}
	else if(op=='*')
	{
		result=n1*n2;
	}
	else if(op=='/')
	{
		if(n2!=0)
		{
			result=n1/n2;
		}
		else
		{
			cout<<"Error! Division by zero."<<endl;
			return 1;
		}
	}
	else
	{
		cout<<"Invalid opreator!"<<endl;
		return 1;
	}
	cout<<"Result:"<<result<<endl;
	return 0;
}
