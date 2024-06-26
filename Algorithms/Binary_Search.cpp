// Binary Search Algorithms
// Time Complexity best case O(1)
// Worst case O(n)

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5},l,r,mid,data;

//     l=0,r=5-1;
//     cout<<"Enter data you want to search: ";
//     cin>>data;
//     while(l<r){
//         mid=(l+r)/2;

//         if(data==arr[mid]){
//             cout<<"Data found at index: "<<mid;
//             break;


//         }
//         else if(data<arr[mid]){
//             l=mid+1;
//         }
//         else{
//             r=mid-1;
//         }

//     }
//         cout<<"Element not found ";



   


// }

// Implimenting binary search using user defined function

#include<iostream>
using namespace std;
int binary_search(int arr[],int l,int r,int data){
    while(l<r){
        int mid=(l+r)/2;

        if(data=arr[mid]){
            return mid;
        }
        else if(data<arr[mid]){
            return binary_search(arr,mid+1,r,data);
        }
        else{
            return binary_search(arr,l,mid-1,data);
        }
    }

    return -1;

}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int data=4;
    int n=sizeof(arr)/sizeof(arr[0]);

    int result=binary_search(arr,0,n-1,data);

    (result ==-1)?cout<<"Element is not present in array":cout<<"Element is present at index "<<result<<endl;

}