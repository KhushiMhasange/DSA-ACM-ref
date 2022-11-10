#include<iostream>
using namespace std;

int main()
{
	int n,index,i;
	
	cout<<"number of elements in array\n";
	cin>>n;
	int a[n];
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	cout<<"Enter index at which number should be inserted"<<endl;
	cin>>index;
	n = n+1;
	for(i=n-2; i>=index; i--)
	{
		a[i+1]=a[i];
	}
	cout<<"Enter the number to be inserted"<<endl;
	cin>>a[index];
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;	
}
