#include<iostream>
using namespace std;
int isPrime(int n){
    if(n==1 || n==0){
        return false;
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                return false;
                break;
            }
        }
    }
}
int main(){
    int l,n;
    cout<<"Enter lower range: ";
    cin>>l;
    cout<<"Enter the upper range: ";
    cin>>n;
    for(int i=l;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}