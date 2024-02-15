#include <stdio.h>

int main() {
    char str[1000]; // Assuming the input string will not exceed 999 characters plus the null terminator

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a line from stdin, including the newline character

    // Convert the string to lowercase
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert uppercase letter to lowercase
        }
    }

    // Print the converted string
    printf("The string in lowercase is: %s", str);

    return 0;
}
