#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str); // Calculate the length of the string
    char temp;
    for (int i = 0; i < length / 2; i++) {
        // Swap the characters at positions i and (length-i-1)
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[1000]; // Assuming a maximum string length of 999 characters plus null terminator

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a line from stdin, including the newline character

    // Remove the newline character at the end if present
    str[strcspn(str, "\n")] = 0;

    // Reverse the string
    reverseString(str);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

