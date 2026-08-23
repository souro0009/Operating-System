#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h> // For checking specific error codes

int main(int argc, char* argv[]) {
    int id = fork();
    
    if (id < 0) {
        // 1. FORK FAILED
        perror("Fork failed"); // Prints the exact system reason (e.g., "Resource temporarily unavailable")
        exit(1);               // Exit the parent program with an error status
    } 
    else if (id == 0) {
        // 2. CHILD PROCESS
        printf("Hello from Child (ID: %d)\n", id);
        exit(0);
    } 
    else {
        // 3. PARENT PROCESS
        printf("Hello from Parent. My child's PID is %d\n", id);
    }
    
    return 0;
}
