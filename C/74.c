#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_SIZE 100

int main() {
    char input[MAX_SIZE];
    char *args[MAX_SIZE / 2 + 1];

    while (1) {
        printf("Shell >> ");
        fgets(input, MAX_SIZE, stdin);

        if (strcmp(input, "exit\n") == 0) {
            printf("Exiting the shell...\n");
            break;
        }

        int argCount = 0;
        char *token = strtok(input, " \n");
        while (token != NULL) {
            args[argCount++] = token;
            token = strtok(NULL, " \n");
        }
        args[argCount] = NULL;

        pid_t pid = fork();

        if (pid < 0) {
            fprintf(stderr, "Fork failed\n");
            return EXIT_FAILURE;
        } else if (pid == 0) {
            // Child process
            execvp(args[0], args);
            fprintf(stderr, "Execution failed\n");
            return EXIT_FAILURE;
        } else {
            // Parent process
            wait(NULL);
        }
    }

    return EXIT_SUCCESS;
}
