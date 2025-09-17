//WAP to find the largest value out of three value.
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter the value of A:"<<endl;
	cin>>a;
	cout<<"Enter the value of B:"<<endl;
	cin>>b;
	cout<<"Enter the value of C:"<<endl;
	cin>>c;
	
	if(a>=b && a>=c)
	{
		cout<<"A is largest value...!";
	}
	else if(b>=a && b>=c)
	{
		cout<<"B is largest value...!";
	}
	else
	{
		cout<<"C is largest value...!";
	}
	return 0;
}

//output
//Enter the value of A:
//6
//Enter the value of B:
//7
//Enter the value of C:
//3
//B is largest value...!
