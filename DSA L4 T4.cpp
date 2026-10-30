
#include<iostream>
using namespace std;

int main()
{
    int arr1[]={5,3,8,4,2};
    int arr2[]={5,3,8,4,2};
    int n=5;

    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {                                     //Bubble sort
            if(arr1[j] > arr1[j+1])
            {
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }

    cout<<"Bubble Sorted Array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr1[i]<<" ";
    }

    cout<<endl;

    
	for(int i=0; i<n-1; i++)
    {                                 // Selection Sort
        int min=i;

        for(int j=i+1; j<n; j++)
        {
            if(arr2[j] < arr2[min])
            {
                min=j;
            }
        }

        int temp=arr2[i];
        arr2[i]=arr2[min];
        arr2[min]=temp;
    }

    cout<<"Selection Sorted Array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr2[i]<<" ";
    }

    return 0;
}
