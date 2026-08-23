#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int n,id;

int main(int argc, char* argv[]){
    //printf("Enter the value of n");
    //scanf("%d",&n);
        //fork();
        //fork();
        //printf("Hello world \n");

        if(fork()){
            if(fork()){
                printf("Hi");
            }
        }
    return 0;
}