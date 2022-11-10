#include<iostream>
using namespace std;

int main(){
	
int n,i,num,t;
cout<<"number of elements in array\n";
cin>>n;
int a[n];

for(i=0; i<n; i++)
{
	cin>>a[i];
}
cout<<"Enter number to be deleted"<<endl;
cin>>num;

for(i=0;i<n;i++)
{
	if (a[i]==num)
	{t=i;}
}

for(i=t;i<n;i++)
{
	a[i]=a[i+1];
	n = n-1;
}

for(i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
}
