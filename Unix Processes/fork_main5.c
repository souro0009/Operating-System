#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int n,id;

int main(int argc, char* argv[]){
    printf("Enter the value of n");
    scanf("%d",&n);
        id = fork();
        if (id != 0)
        {
            fork();   
        }
        printf("Hello world"); 
    return 0;
}