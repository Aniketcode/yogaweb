// #include<iostream>
// #include<cstring>
// #include<string.h>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter the no of rows you want: ";
//     cin>>r;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// int main(){
   
    // for(int i=1;i<=r;i++)
    // {
    //     for(int j=r;j>=i;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // Square/Rectangle
    // for(int i=1;i<=r;i++)
    // {
    //     for(int j=1;j<=r;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
// //    count repeated items in a string 
//     string name="Shrish";
//     char c;
//     int count=0;
//     cout<<"Enter character to find its frequency : "<<endl;
//     cin>>c;
 
//     for (int i = 0 ; i < name.length() ; i++ )
//     {
//     putchar(tolower(name[i]));
//     if (name[i] == c)
//     count++;

//     }
//     cout << "The character '" << c << "' appears " << count << " times." << endl;
//     return 0;
    

// }

// #include<bits/stdc++.h>
// using namespace std;
// void mergeArray(int arr1[],int arr2[],int n1,int n2,int arr3[]){
//     int i=0,j=0,k=0;
//     while(i<n1){
//         arr3[k++]=arr1[i++];

//     }
//     while(j<n2){
//         arr3[k++]=arr2[j++];
//     }
//     sort(arr3,arr3+n1+n2);
// }
// int main(){
//     int arr1[]={1,3,5,7};
//     int n1=sizeof(arr1)/sizeof(arr1[0]);
//     int arr2[]={2,4,6,8};
//     int n2=sizeof(arr2)/sizeof(arr2[0]);
//     int arr3[n1+n2];
//     mergeArray(arr1,arr2,n1,n2,arr3);
//     cout<<"Merged and sorted array is: ";
//     for(int i=0;i<n1+n2;i++){
//         cout<<arr3[i]<<" ";

//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={1,5,8,9,6,7,3,4,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,greater<int>());
    cout<<"Sorted in descending order: \n";
    for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";
    return 0;
}