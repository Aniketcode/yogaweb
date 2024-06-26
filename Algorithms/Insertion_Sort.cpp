// Insertion Sort
/* The complexity is both best case and worst case
i.Best Case : O(n)
ii.Worst Case : O(n2)

*/
#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    cout<<"Enter no of elements you want: ";
    cin>>n;

    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array elements before sorting is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    for(int i=1;i<n;i++){
       int temp=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<endl;
    cout<<"The array elements after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}