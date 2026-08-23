#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>


int main(int argc, char* argv[]){
    int n=3,count =0,id;
    while (n>0)
    {
        id = fork();
        printf("Hello---%d\n",id);
        //wait(NULL);
        n--;
        //count++;
    }
    //printf("%d\n",count);
    return 0;
}