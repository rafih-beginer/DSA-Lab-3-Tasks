#include<iostream>
using namespace std;
int main()
{
 int arr[]={5,3,8,4,2};
 int n=5;
 
 for(int i=0;i<n-1;i++)
 {
 	int minindex=i;
 	for(int j=i+1;j<n;j++)
 	{
 		if(arr[j]< arr[minindex])
 		{
 			minindex = j;
		 }
	 }
	 if(minindex != i)
	 {
	 	int temp=arr[i];
	 	arr[i]=arr[minindex];
	 	arr[i]=arr[minindex];
	 	arr[minindex]= temp;
	 }
 }
 cout<<"Sorted Array"<<endl;
 for(int i=0;i<n;i++)
 {
 	cout<<arr[i]<<" ";
 }
 return 0;
}