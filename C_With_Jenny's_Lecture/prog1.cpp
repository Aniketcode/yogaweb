#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,c=0,rem,sum=0,temp=0,temp2=0;
    cout<<"Enter the number: ";
    cin>>n;
    temp=n;
    while(temp!=0){
        c++;
        temp/=10;
    }
    temp2=n;
    while(temp2!=0){
        rem=temp2%10;
        sum+=pow(rem,c);
        temp2/=10;

    }
    if(n==sum){
        cout<<"Entered number is an armstrong number! "<<endl;
    }
    else{
        cout<<"Entered number is not an armstrong number! "<<endl;
    }
}