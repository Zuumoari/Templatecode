#include <stdio.h>      // Standard input/output functions
#include <stdlib.h>     // Standard library functions
#include <string.h>     // String manipulation functions

// Method 1: Print formatted output
void printExample() {
    printf("Hello, World!\n");
}

// Method 2: Read formatted input
void scanExample() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
}

// Method 3: Allocate memory dynamically
void mallocExample() {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    printf("Value stored in dynamically allocated memory: %d\n", *ptr);
    free(ptr);  // Freeing dynamically allocated memory
}

// Method 4: Deallocate memory
void freeExample() {
    int *ptr = (int *)malloc(sizeof(int));
    free(ptr);
}

// Method 5: Copy strings
void strcpyExample() {
    char source[] = "Hello";
    char destination[20];
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
}

// Method 6: Compare strings
void strcmpExample() {
    char str1[] = "hello";
    char str2[] = "world";
    int result = strcmp(str1, str2);
    printf("Comparison result: %d\n", result);
}

// Method 7: Get string length
void strlenExample() {
    char str[] = "Hello";
    int length = strlen(str);
    printf("Length of string: %d\n", length);
}

// Method 8: Concatenate strings
void strcatExample() {
    char str1[20] = "Hello ";
    char str2[] = "World!";
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

// Method 9: Open file
void fopenExample() {
    FILE *file = fopen("example.txt", "r");
    if (file != NULL) {
        printf("File opened successfully!\n");
        fclose(file); // Closing the file
    } else {
        printf("Failed to open file!\n");
    }
}

// Method 10: Close file
// (Already used in fopenExample)

// Method 11: Read from file
void freadExample() {
    FILE *file = fopen("example.txt", "r");
    if (file != NULL) {
        char buffer[100];
        fread(buffer, sizeof(char), 100, file);
        printf("Read from file: %s\n", buffer);
        fclose(file);
    } else {
        printf("Failed to open file!\n");
    }
}

// Method 12: Write to file
void fwriteExample() {
    FILE *file = fopen("example.txt", "w");
    if (file != NULL) {
        char text[] = "This is a test.";
        fwrite(text, sizeof(char), strlen(text), file);
        fclose(file);
    } else {
        printf("Failed to open file!\n");
    }
}

// Method 13: Read formatted data from file
void fscanfExample() {
    FILE *file = fopen("data.txt", "r");
    int num;
    if (file != NULL) {
        fscanf(file, "%d", &num);
        printf("Read formatted data from file: %d\n", num);
        fclose(file);
    } else {
        printf("Failed to open file!\n");
    }
}

// Method 14: Write formatted data to file
void fprintfExample() {
    FILE *file = fopen("output.txt", "w");
    int num = 10;
    if (file != NULL) {
        fprintf(file, "Formatted output: %d\n", num);
        fclose(file);
    } else {
        printf("Failed to open file!\n");
    }
}

// Method 15: Convert string to integer
void atoiExample() {
    char str[] = "123";
    int num = atoi(str);
    printf("Converted string to integer: %d\n", num);
}

// Method 16: Convert string to float
void atofExample() {
    char str[] = "3.14";
    float num = atof(str);
    printf("Converted string to float: %.2f\n", num);
}

// Method 17: Generate pseudo-random numbers
void randExample() {
    int randomNum = rand() % 100;
    printf("Random number: %d\n", randomNum);
}

// Method 18: Seed the random number generator
void srandExample() {
    srand(time(NULL));
}

// Method 19: Copy memory block
void memcpyExample() {
    char src[] = "Hello";
    char dest[20];
    memcpy(dest, src, strlen(src) + 1);
    printf("Copied memory block: %s\n", dest);
}

// Method 20: Fill memory block with a constant byte
void memsetExample() {
    char str[50] = "This is a test string";
    memset(str, '$', 7);
    printf("Modified string: %s\n", str);
}

int main() {
    printExample();
    scanExample();
    mallocExample();
    freeExample();
    strcpyExample();
    strcmpExample();
    strlenExample();
    strcatExample();
    fopenExample();
    freadExample();
    fwriteExample();
    fscanfExample();
    fprintfExample();
    atoiExample();
    atofExample();
    randExample();
    srandExample();
    memcpyExample();
    memsetExample();
    return 0;
}

