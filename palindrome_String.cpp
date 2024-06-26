// #include<stdio.h>
// #include<string.h>

// int main(){
//     char s[20],rev[20],j;
//     printf("\nEnter the String: ");
//     scanf("%s",&s);
    
    
//     printf("\nThe Entered String is: %s",s);
//     int l=strlen(s);
//     rev==strrev(s);
//     printf("\nLenght of the String is: %d",l);
//     int i;
//     for(i=0;i<l/2;i++){
//         int t=s[i];
//         s[i]=s[l-i-1];
//         s[l-i-1]=t;

//     }
//     printf("\nThe reverse of the String is: %s",s);
//     printf(rev);
//     if(s==rev){
//         printf("\nEntered String is palindrome");

//     }
//     else{
//         printf("\nEntered String is not palindrome");
//     }
// }

// Palindrome number is a number that is same after reverse

#include<stdio.h>


void armstrong(int y){
      int count=0,i,d,r;
      
      while(y>0){
        d=y%10;
        y=y/10;
        count++;
      }
}
int main(){

    int n,r,sum=0,temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;

    }
    if(sum==temp){
        printf("Palindrome number");
    }
    else{
        printf("Not palindrome number");
    }

    return 0;
    int y;
    printf("Enter the number: ");
    scanf("%d",&y);
    armstrong(y);

}
