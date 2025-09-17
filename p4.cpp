//WAP to swap two values.Also swap two value without using temporay variable.
#include<iostream>
using namespace std;

int main()
{
	int a,b,temp;
	cout<<"Enter the value A:"<<endl;
	cin>>a;
	
	cout<<"Enter the value B:"<<endl;
	cin>>b;
	
	cout<<"Without swaping value a:" << a <<endl;
	cout<<"without swaping value b:" << b <<endl;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"After swaping value a:"<< a <<endl;
	cout<<"After swaping value b:"<< b <<endl;
	
	return 0;
}

//Output
//Enter the value A:
//5
//Enter the value B:
//6
//Without swaping value a:5
//without swaping value b:6
//After swaping value a:6
//After swaping value b:5
