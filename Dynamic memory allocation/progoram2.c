// Write a program to create an array of size using calloc where n is integer entered by the user
#include<stdio.h>
// #include<calloc.h>
#include<stdlib.h>


int main(){

    int n,*ptr;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("Enter the data: ");
    for(int i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

    printf("Displaying the data: ");
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    free(ptr);

    return 0;
}