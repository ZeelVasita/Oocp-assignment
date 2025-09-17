//WAP to create arithmatic calculator using if...else  and switch...case type of control statemantes.
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	char operater;
	
	cout<<"Enter your first number:";
	cin>>a;
	
	cout<<"Enter your second number:";
	cin>>b;
	
	cout<<"Enter the operater:";
	cin>>operater;
	
//........using if...else condition..........
//	if(operater == '+')
//	{
//		cout<<"your answer is:"<<a+b;
//	}
//	else if(operater == '-')
//	{
//		cout<<"your answer is:"<<a-b;
//	}
//	else if(operater == '*')
//	{
//		cout<<"your answer is:"<<a*b;
//	}
//	else if(operater == '/')
//	{
//		cout<<"your answer is:"<<a/b;
//	}
//	else
//	{
//		cout<<"Invalid Oprater";
//	}

//........using switch case..........
	switch(operater)
	{
		case '+':
			cout<<"your answer is:"<<a+b;
			break;
		
		case '-':
			cout<<"your answer is:"<<a-b;
			break;
		
		case '*':
			cout<<"your answer is:"<<a*b;
			break;
		
		case '/':
			cout<<"your answer is:"<<a/b;
			break;
			
		default:
			cout<<"Invalid Choice";
	}
	return 0;
}
