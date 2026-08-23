#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char* argv[]){
    int id = fork();
    if(id==0){
        printf("Hello from child processes \n");
    }else
    {
        printf("Hello from main processes\n");
    }
    
    
    return 0;
}