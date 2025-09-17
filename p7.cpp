//wap to find out the armstrong number between 100 and 999.
#include<iostream>
using namespace std;

int main()
{
	int num,ol,remainder,res;
	cout<<"Armstrong number between 100 and 999:"<<endl;
	
	for(num=100;num<=999;num++)
	{
		ol=num;
		res=0;
		
		while(ol!=0)
		{
			remainder=ol%10;
			res+=remainder*remainder*remainder;
			ol=ol/10;
		}
		if(res==num)
		{
			cout<<num<<endl;
		}
	}
	cout<<endl;
	return 0;
}
