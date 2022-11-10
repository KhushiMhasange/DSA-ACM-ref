#include<iostream>
using namespace std;

int main()
{
	int n,a[n];
	cout<<"number of elements in array\n";
	cin>>n;
	
	cout<<"Enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Traversing array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
