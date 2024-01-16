#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int main()
{
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100], content[MAX_SIZE];

    printf("Enter source file name: ");
    scanf("%s", sourceFileName);

    sourceFile = fopen(sourceFileName, "r");

    if (sourceFile == NULL)
    {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    printf("Enter destination file name: ");
    scanf("%s", destinationFileName);

    destinationFile = fopen(destinationFileName, "w");

    if (destinationFile == NULL)
    {
        fclose(sourceFile);
        perror("Error opening destination file");
        return EXIT_FAILURE;
    }

    while (fgets(content, MAX_SIZE, sourceFile) != NULL)
    {
        fputs(content, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return EXIT_SUCCESS;
}
