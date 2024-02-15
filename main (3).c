#include <stdio.h>

int main() {
    char str[1000]; // Assuming the input string will not exceed 999 characters plus the null terminator
    int length = 0; // Variable to store the length of the string

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a line from stdin, including the newline character

    // Calculate the length of the string manually
    while (str[length] != '\0' && str[length] != '\n') { // Also stop at newline character to ignore it
        length++;
    }

    // Print the length of the string
    printf("The length of the input string is: %d\n", length);

    return 0;
}
