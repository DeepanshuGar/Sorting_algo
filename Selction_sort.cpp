#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
void Selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int minimum = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[minimum] > arr[j])
            {
                minimum = j;
            }
        }
        swap(&arr[minimum],&arr[i]);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Selection_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
