//WAP to find out and display factorial of the given number.
#include<iostream>
using namespace std;

int main()
{
	int num,factorial=1;
	
	cout<<"Enter the number:";
	cin>>num;
	
	for(int n=1;n<=num;n++)
	{
		factorial=factorial*n;
	}
	
	cout<<"Your factorial is:"<<factorial;
	return 0;
}

