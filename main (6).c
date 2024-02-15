#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000 // Maximum size of the string

int main() {
    char str[MAX_SIZE], temp;
    int i, length = 0, isPalindrome = 1; // Assume the string is a palindrome initially

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove the newline character at the end

    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Check for palindrome
    for (i = 0; i < length / 2; i++) {
        // Convert to lowercase for case-insensitive comparison
        char leftChar = (str[i] >= 'A' && str[i] <= 'Z') ? str[i] + 'a' - 'A' : str[i];
        char rightChar = (str[length - i - 1] >= 'A' && str[length - i - 1] <= 'Z') ? str[length - i - 1] + 'a' - 'A' : str[length - i - 1];
        
        if (leftChar != rightChar) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
