#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key)
{
	int start = 0;
	int end = size-1;
	int Mid = start + (end-start)/2; /*(start+end)/2 is also correct par large 
	numbers ke liye out of range ho jayega.*/
	while(start<=end)
	{
	   if(arr[Mid]==key)
	   {
	   	return Mid;
	   }
	   if(arr[Mid]<key)
	   {
	   	start = Mid+1;
	   }
	   else
	   {
	   	end = Mid-1;
	   }
	   Mid = start + (end-start)/2;
	}                            
	return -1;
}

int main()
{
	int even[6] = {2,4,6,8,12,18};
	int odd[5] = {1,3,5,7,20};
	
	int evenIndex = BinarySearch(even,6,12);
	cout<<"Index of 8 is "<<evenIndex<<endl;
	
	int oddIndex = BinarySearch(odd,5,20);
	cout<<"Index of 5 is "<<oddIndex<<endl;

   return 0;
}
