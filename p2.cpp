//WAP to allow the user to enter multiple numbers until a zero is entered.After zero is entered,the program should print the count of positive and negative numbers entered.
#include<iostream>
using namespace std;

int main()
{
	int num;
	int PositiveCount=0 , NegativeCount=0;
	cout<<"Enter numbers (0 to stop):"<<endl;
	
	while(true)
	{
		cin>>num;
		if(num==0)
		{
			break;
		}
		else if(num>0)
		{
			PositiveCount++;
		}
		else
		{
			NegativeCount++;
		}
	}
	cout<<"Count of positive numbers:"<<PositiveCount<<endl;
	cout<<"Count of negative numbers:"<<NegativeCount<<endl;
	return 0;
}

//output
//Enter numbers (0 to stop):
//1
//2
//3
//-4
//-5
//-6
//0
//Count of positive numbers:3
//Count of negative numbers:3

