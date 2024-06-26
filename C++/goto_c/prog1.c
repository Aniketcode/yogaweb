// Write a c program to print all numbers from 1 to N using goto statement

#include<stdio.h>
int main(){
    int count,n;
    printf("Enter n value: ");
    scanf("%d",&n);
    count=1;
    start:
    printf(" %d ",count);
    count++; 

    if(count<=n)
    goto start;

    return 0;
}