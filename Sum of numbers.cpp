#include<iostream>
using namespace std;

int main()
{
	int n,arr[n];
	int sum=0;
	
	cout<<"How many numbers of array do you want : ";
	cin>>n;
	
	for(int i=0;i<=n;i++)
	{
		cout<<"Enter the value of "<<i<<"th index  : ";
		cin>>i;
		
		sum=sum+i;
	}
	
	cout<<endl;
	
	cout<<"The result of sum is : "<<sum;
	
	cout<<endl;
		
	return 0;
}
