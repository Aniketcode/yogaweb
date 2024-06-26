// Linear Search Algorithm
// Time Complexity Best case--> O(1)
//Worst case order of O(n) 
#include<iostream>
using namespace std;

int main(){
    int n,data,found=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"Enter element you want to search: ";
    cin>>data;

    for(int i=0;i<n;i++){
        if(arr[i]==data){
            cout<<"Element found at index "<<i;
            found=1;
            break;
        }
        
    }
    if(found==0){
        cout<<"Element not found ";
    }
    }
    

