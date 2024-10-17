#include<iostream>
using namespace std;
	int sum;
	int arr[10];
	float avg,per;
	void input()
   {	
		for(int i=0;i<10;i++)
		{
			cout<<"enter a nbr"<<endl;
			cin>>arr[i];
			sum=sum+arr[i];
		}
	}
	void cal()
	{
		avg=sum/10;
		cout<<"average"<<avg<<endl;
		per=(avg/sum)*100;
		cout<<"percentage"<<per<<endl;
	}
	int main()
{
	input();
	cal();
}
