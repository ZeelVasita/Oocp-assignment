//WAP to add five number using while and for loop.

#include<iostream>
using namespace std;

int main()
{
	int i,num,sum1=0,sum2=0;
	i=1;
	cout<<"enter the five number:";
	while(i<=5)
	{
		cin>>num;
		sum1+=num;
		i++;
	}
	cout<<"sum using the while loop:"<<sum1<<endl;
	cout<<"Enter the five number:"<<endl;
	for(i=1;i<=5;i++)
	{
		cin>>num;
		sum2+=num;
	}
	cout<<"sum using for loop:"<<sum2<<endl;
	return 0;
}
