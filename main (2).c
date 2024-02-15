#include <stdio.h>

#define MAX_ROWS 100 // Maximum number of rows
#define MAX_COLS 100 // Maximum number of columns

int main() {
    int array[MAX_ROWS][MAX_COLS]; // 2D array
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Check if the dimensions are within the defined limits
    if(rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Error: The maximum size of the array is exceeded.\n");
        return 1; // Exit the program with an error code
    }

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Display the elements of the array
    printf("Elements of the array are:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
