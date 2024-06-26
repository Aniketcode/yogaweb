#include<iostream>
using namespace std;
int main(){
    int a,b,min,max,hcf=0,lcm=0;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    if(a>b)
        max=a;
    else 
        min=b;


    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    cout<<"HCF of "<<a<<" , "<<b<<" is: "<<hcf<<endl;
    // lcm=(a*b)/hcf;
    // cout<<max;
    while(1){
        // cout<<"Hello";
        if(max%a==0 && max%b==0){
            // lcm=max;
            cout<<"tara";
            cout<<"LCM of "<<a<<" , "<<b<<" is: "<<max<<endl;
            break;
        }
        ++max;
    }
    // cout<<"LCM of "<<a<<" , "<<b<<" is: "<<lcm<<endl;

    return 0;
}