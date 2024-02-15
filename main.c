/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int isPalindrome(int num)
{
    int originalNum = num;
    int reversedNum = 0;
    int remainder;

   
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    
    if (originalNum == reversedNum) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int n;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; 
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            printf("%d is a palindrome.\n", arr[i]);
        } else {
            printf("%d is not a palindrome.\n", arr[i]);
        }
    }

    return 0;
}
