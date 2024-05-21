#include <iostream>     // Input/output stream
#include <fstream>      // File stream
#include <sstream>      // String stream
#include <string>       // String manipulation
#include <cstdlib>      // Standard library
#include <ctime>        // Time functions
#include <cstring>      // String manipulation

using namespace std;

// Method 1: Output data to console
void coutExample() {
    cout << "Hello, World!" << endl;
}

// Method 2: Read data from console
void cinExample() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "You entered: " << num << endl;
}

// Method 3: Allocate memory for single object dynamically
void newExample() {
    int *ptr = new int;
    *ptr = 10;
    cout << "Value stored in dynamically allocated memory: " << *ptr << endl;
    delete ptr; // Deallocate dynamically allocated memory
}

// Method 4: Allocate memory for multiple objects dynamically
void mallocExample() {
    int *arr = (int *)malloc(5 * sizeof(int));
    free(arr); // Deallocate dynamically allocated memory
}

// Method 5: Copy strings
void strcpyExample() {
    char source[] = "Hello";
    char destination[20];
    strcpy(destination, source);
    cout << "Copied string: " << destination << endl;
}

// Method 6: Compare strings
void strcmpExample() {
    char str1[] = "hello";
    char str2[] = "world";
    int result = strcmp(str1, str2);
    cout << "Comparison result: " << result << endl;
}

// Method 7: Get string length
void strlenExample() {
    char str[] = "Hello";
    int length = strlen(str);
    cout << "Length of string: " << length << endl;
}

// Method 8: Concatenate strings
void strcatExample() {
    char str1[20] = "Hello ";
    char str2[] = "World!";
    strcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;
}

// Method 9: Read input from file
void ifstreamExample() {
    ifstream file("example.txt");
    if (file.is_open()) {
        string line;
        getline(file, line);
        cout << "Read from file: " << line << endl;
        file.close();
    } else {
        cout << "Failed to open file!" << endl;
    }
}

// Method 10: Write output to file
void ofstreamExample() {
    ofstream file("output.txt");
    if (file.is_open()) {
        file << "This is a test." << endl;
        file.close();
    } else {
        cout << "Failed to open file!" << endl;
    }
}

// Method 11: Manipulate strings as streams
void stringstreamExample() {
    stringstream ss;
    ss << "Hello " << "World!";
    cout << "Manipulated string: " << ss.str() << endl;
}

// Method 12: Convert string to integer
void stoiExample() {
    string str = "123";
    int num = stoi(str);
    cout << "Converted string to integer: " << num << endl;
}

// Method 13: Convert string to float
void stofExample() {
    string str = "3.14";
    float num = stof(str);
    cout << "Converted string to float: " << num << endl;
}

// Method 14: Generate pseudo-random numbers
void randExample() {
    int randomNum = rand() % 100;
    cout << "Random number: " << randomNum << endl;
}

// Method 15: Seed the random number generator
void srandExample() {
    srand(time(NULL));
}

// Method 16: Copy memory block
void memcpyExample() {
    char src[] = "Hello";
    char dest[20];
    memcpy(dest, src, strlen(src) + 1);
    cout << "Copied memory block: " << dest << endl;
}

// Method 17: Set memory block to a particular value
void memsetExample() {
    char str[50] = "This is a test string";
    memset(str, '$', 7);
    cout << "Modified string: " << str << endl;
}

// Method 18: Vector - dynamic array
void vectorExample() {
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Vector size: " << vec.size() << endl;
}

// Method 19: Write formatted data to file
void fprintfExample() {
    FILE *file = fopen("output.txt", "w");
    int num = 10;
    if (file != NULL) {
        fprintf(file, "Formatted output: %d\n", num);
        fclose(file);
    } else {
        cout << "Failed to open file!" << endl;
    }
}

// Method 20: Read formatted data from file
void fscanfExample() {
    FILE *file = fopen("data.txt", "r");
    int num;
    if (file != NULL) {
        fscanf(file, "%d", &num);
        cout << "Read formatted data from file: " << num << endl;
        fclose(file);
    } else {
        cout << "Failed to open file!" << endl;
    }
}

int main() {
    coutExample();
    cinExample();
    newExample();
    mallocExample();
    strcpyExample();
    strcmpExample();
    strlenExample();
    strcatExample();
    ifstreamExample();
    ofstreamExample();
    stringstreamExample();
    stoiExample();
    stofExample();
    randExample();
    srandExample();
    memcpyExample();
    memsetExample();
    vectorExample();
    fprintfExample();
    fscanfExample();
    return 0;
}

