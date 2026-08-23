#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char* argv[]){
    int id = fork();
    printf("Hello world from id : %d \n",id);
    // id of child process is 0 and id of parent process is the pid of child process
    
    return 0;
}