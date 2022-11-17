#include<iostream>
using namespace std;

int n,i,sum=0,result; //  using global variables

int total()
{
	int arr[n];
	cout<<"How many numbers of array do you want ? ";
	cin>>n;
	cout<<endl;
	
	for(i=0;i<=n;i++)
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
