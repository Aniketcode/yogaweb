// Check whether a number is krishnamurti number or not
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n,rem,s=0;
    cout<<"Enter the number: ";
    cin>>n;
    int temp=n;
    while(temp!=0){
        rem=temp%10;
        s=s+factorial(rem);
        temp/=10;
    }
    if(s==n){
        cout<<"The number is a krishnamurty number!!"<<endl;

    }
    else{
        cout<<"The number is not a krishnamurty number!!"<<endl;
    }
    // cout<<"The factorail of "<<n<<" is: "<<factorial(n);
    return 0;
}