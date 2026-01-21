

#include <stdio.h>

/*
Name: Pranay Bhavanam
Student ID: N01609638
Lab 1 – Data Sizes of x86 Architecture
*/

#include <stdio.h>


struct Account {
    unsigned int account_number; // Account number
    char account_type;           // Type of account
    char *last_name;             // Pointer to last name string
    char *first_name;            // Pointer to first name string
    float balance;               // Account balance
    char reserved[6];            // Reserved bytes
};

/* Function to display sizes of data types */
void displaySizes() {

    /* Basic data types with animal names */
    char letter;                    // char variable
    short index;                   // short variable
    int counter;                     // int variable
    long total;                  // long variable
    float average;                 // float variable
    double precision;                // double variable

    /* Pointer data types */
    int *intPtr;                   // pointer to int
    long *longPtr;                 // pointer to long
    float *floatPtr;                // pointer to float
    double *doublePtr;               // pointer to double

    /* Struct and struct pointer */
    struct Account account1;        // struct Account variable
    struct Account *account2;       // pointer to struct Account

    /* Printing sizes using the sizeof operator */
    printf("Size of char: %d bytes\n", sizeof(letter));
    printf("Size of short: %d bytes\n", sizeof(index));
    printf("Size of int: %d bytes\n", sizeof(counter));
    printf("Size of long: %d bytes\n", sizeof(total));
    printf("Size of float: %d bytes\n", sizeof(average));
    printf("Size of double: %d bytes\n", sizeof(precision));

    printf("Size of pointer to int: %d bytes\n", sizeof(intPtr));
    printf("Size of pointer to long: %d bytes\n", sizeof(longPtr));
    printf("Size of pointer to float: %d bytes\n", sizeof(floatPtr));
    printf("Size of pointer to double: %d bytes\n", sizeof(doublePtr));

    printf("Size of struct Account: %d bytes\n", sizeof(account1));
    printf("Size of pointer to struct Account: %d bytes\n", sizeof(account2));
}

/* Main function */
int main() {
    displaySizes();               // Call function to show sizes
    return 0;
}
