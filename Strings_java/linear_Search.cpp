#include<iostream>
using namespace std;
int main(){
    int n,ele,flag=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    cout<<"Enter the element you want to search: ";
    cin>>ele;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            flag=1;
            cout<<"Element found at "<<" position "<<(i+1);
        }
    }
    if(flag==0){
        cout<<"Element not found! ";

    }


    return 0;
}