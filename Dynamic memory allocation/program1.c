// Write a program to create a dynamic memory array of 5 floats using malloc()

#include<stdio.h>
#include<stdlib.h>

int main(){
    float size,*ptr;
    printf("Enter the size of float array: ");
    scanf("%f",&size);
    ptr=(float*) malloc(size*sizeof(float));
    ptr[0]=21.22;
    ptr[1]=32.22;
    ptr[2]=42.22;
    ptr[3]=63.22;
    ptr[5]=3.22;

    printf("The value of float array on 4th position is: %f",ptr[3]);
    
    free(ptr);


    return 0;
}