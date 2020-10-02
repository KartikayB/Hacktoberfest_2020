#include <iostream>

using namespace std;

void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void SelectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index = i;
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[i])
                min_index = j;
            swap(&arr[min_index],&arr[i]);
    }
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int my_arr[n];
    cout<<"Enter "<<n<<" numbers now...";
    cout<<endl;
    for(int i=0;i<n;i++)
        cin>>my_arr[i];
    cout<<"Array before swapping: ";
    PrintArray(my_arr,n);
    SelectionSort(my_arr,n);
    cout<<"Array after swapping: ";
    PrintArray(my_arr,n);

}