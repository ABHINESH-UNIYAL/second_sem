#include <stdio.h>

int main() {
    char str[1000]; // Assuming the input string will not exceed 999 characters plus the null terminator

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a line from stdin, including the newline character

    // Convert the string to uppercase
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert lowercase letter to uppercase
        }
    }

    // Print the converted string
    printf("The string in uppercase is: %s", str);

    return 0;
}
