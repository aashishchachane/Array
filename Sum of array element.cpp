#include<iostream>
using namespace std;

int n,i,sum=0,result; //  using global variables
int arr[5];

int total()
{
	//int arr[n];
	
	cout<<"Enter the array of 5 elements !!! ";
	cout<<endl<<endl;
	
	for(i=0;i<=5;i++)
	{
		cout<<"The value of "<<i<<"th index : ";
		cin>>i;
		
		sum=sum+i;
		
		cout<<endl;
	}
	
	return sum;
}

int main()
{
	result=total();
	cout<<"The result of addition of array is : "<<result;
	return 0;
	
}
