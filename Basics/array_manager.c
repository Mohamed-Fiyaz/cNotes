// Array Manager
#include <stdio.h>

#define MAX_SIZE 100
#define SUBARRAY_SIZE 5

struct IntArray {
    int numbers[SUBARRAY_SIZE];
};

int main() {
    struct IntArray arr[MAX_SIZE];
    int arrSize = 0;
    int choice, index, subIndex;

    while (1) {
        printf("Menu:\n");
        printf("1. Create an array of integers\n");
        printf("2. Display all arrays\n");
        printf("3. Modify an array\n");
        printf("4. Delete an array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Create an array of integers
                if (arrSize < MAX_SIZE) {
                    printf("Enter %d integers for the array:\n", SUBARRAY_SIZE);
                    for (int i = 0; i < SUBARRAY_SIZE; i++) {
                        scanf("%d", &arr[arrSize].numbers[i]);
                    }
                    arrSize++;
                    printf("Array created!\n\n");
                } else {
                    printf("Maximum array limit reached.\n\n");
                }
                break;

            case 2: // Display all arrays
                printf("Arrays:\n");
                for (int i = 0; i < arrSize; i++) {
                    printf("Array %d: ", i);
                    if (arr[i].numbers[0] == 0) {
                        printf("Empty\n");
                    } else {
                        for (int j = 0; j < SUBARRAY_SIZE; j++) {
                            printf("%d ", arr[i].numbers[j]);
                        }
                        printf("\n");
                    }
                }
                break;

            case 3: // Modify an array
                printf("Enter index of array to modify: ");
                scanf("%d", &index);
                if (index >= 0 && index < arrSize) {
                    printf("Enter new %d integers for the array:\n", SUBARRAY_SIZE);
                    for (int i = 0; i < SUBARRAY_SIZE; i++) {
                        scanf("%d", &arr[index].numbers[i]);
                    }
                    printf("Array modified!\n\n");
                } else {
                    printf("Invalid index.\n\n");
                }
                break;


            case 4: // Delete an array
                printf("Enter index of array to delete or -1 to cancel: ");
                scanf("%d", &index);
                if (index == -1) {
                    printf("Deletion cancelled.\n\n");
                    break;
                }
                if (index >= 0 && index < arrSize) {
                    // Clear the entire array by setting each element to zero
                    for (int i = 0; i < SUBARRAY_SIZE; i++) {
                        arr[index].numbers[i] = 0;
                    }
                    printf("Array deleted!\n\n");
                } else {
                    printf("Invalid index.\n\n");
                }
                break;

            case 5: // Exit
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please enter a valid option.\n\n");
        }
    }

    return 0;
}
