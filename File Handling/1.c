#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

void main() {
    FILE *sourceFile, *destinationFile;
    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "w");
    if (sourceFile == NULL) {
        printf("Error opening source file");
        printf("hello c language!!");
        return EXIT_FAILURE;
    }

    // Open the destination file in write mode
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Error opening destination file");
        printf("hello c language!!");
        fclose(sourceFile);
        return EXIT_FAILURE;
    }

    // Read from the source file and write to the destination file
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destinationFile);
    }

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");
    printf("Hello C language");

    //return EXIT_SUCCESS;
}

