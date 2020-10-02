#include<iostream>
using namespace std;

void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void InsertionSort(int arr[],int n)
{
    int val,j;
    for(int i=0;i<n;i++)
    {
        val = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>val) //Move all the elements to the left of arr[i],that are greater than it by one position.
        {
            arr[j+1] =arr[j];
            j=j-1;
        }
        arr[j+1] = val;
    }
}

int main()
{
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int my_arr[n];
    cout<<"Enter "<<n<<" numbers now...";
    for(int i=0;i<n;i++)
        cin>>my_arr[i];
    
    cout<<"Array before sorting is: ";
    PrintArray(my_arr,n);
    InsertionSort(my_arr,n);
    cout<<"Array after sorting is: ";
    PrintArray(my_arr,n);
}