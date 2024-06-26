#include<iostream>
using namespace std;


int isPrime(int z){
    int flag=0;
    if(z==0 || z==1){
        cout<<"Entered number is not a prime number ";

    }
    else{
        for(int i=2;i<=z/2;i++){
            if(z%i==0){
                cout<<"Entered number is not a prime number ";
                flag=1;
                break;
            }
        }
        
            if(flag==0){
             cout<<"Entered number is prime number ";   
            }
    }
}

int factorial(int n){  //factorail
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int palindrome(int x){
    int temp,rev=0,dig;
    temp=x;
    while(x>0){
        dig=x%10;
        rev=rev*10+dig;
        x=x/10;
    
    }
    if(temp==rev){
        cout<<"Entered number is a palindrome number! \n"<<endl;

    }
    else{
        cout<<"Entered number is not a prime number! \n";
    }

}
int Sum_Of_Digit(int y){
    int s=0;
    for(int i=1;i<y;i++){
       
            s=s+i;
        
    }
    cout<<"The sum of "<<y<<" is: "<<s;
}
int main(){
    int c;
    do{  
    cout<<"Choose from the following options Enter 0 to exit \n";
    cout<<"1.Factorial\n";
    cout<<"2.Palindrome\n";
    cout<<"3.Sum of digit\n";
    cout<<"4.Cheack prime number\n";
    cout<<"Enter your Choice: ";
    cin>>c;
    
    switch(c){
        case 1:
            int n;
            cout<<"Enter the number: ";
            cin>>n;
            cout<<"The factorial of "<<n<<" is: "<<factorial(n);
            break;
        case 2:
            int x;
            cout<<"Enter the number: ";
            cin>>x;
            palindrome(x);
            break;
        case 3:
            int y;
            cout<<"Enter the digit: ";
            cin>>y;
            Sum_Of_Digit(y);
            break;
        case 4:
            int z;
            cout<<"Enter the number: ";
            cin>>z;

            isPrime(z);
            break;
        
        default:
            cout<<"You have entered an invalid choice! ";
            exit(0);


        
    }

    }while(c!=0);

    
}