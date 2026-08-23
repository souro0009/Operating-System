#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int n;

int main(int argc, char* argv[]){
    printf("Enter the value of n");
    scanf("%d",&n);
        fork();
        fork();
        printf("Hello world"); 
    return 0;
}