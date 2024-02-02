#include <stdio.h>
#include <time.h>

// Function to calculate T(n) = 2 * T(n/2) + n
int calculateRecurrence(int n, int depth) {
    if (n == 1) {
        printf("Iteration %d: T(1) = 1\n", depth);
        return 1;
    } else {
        printf("Iteration %d: T(%d) = 2 * T(%d/2) + %d\n", depth, n, n, n);
        return 2 * calculateRecurrence(n / 2, depth + 1) + n;
    }
}

// Function to calculate T(n) = T(n-1) + n
int recurrence(int n) {
    if (n == 1) {
        printf("T(1) = T(1 - 1) + 1 = 1\n");
        return 1;
    }
    int subproblem = recurrence(n - 1);
    int result = subproblem + n;
    printf("T(%d) = T(%d - 1) + %d = T(%d) + %d = %d\n", n, n, n, n - 1, n, result);
    return result;
}

int main() {
    int choice;

    while (1) {
        printf("Enter your choice:\n");
        printf("1 - Calculate Time Complexity for T(n) = 2T(n/2) + n\n");
        printf("2 - Calculate Time Complexity for T(n) = T(n-1)+n\n");
        printf("3 - Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            int n;
            printf("Enter the value of n: ");
            scanf("%d", &n);

            clock_t start_time = clock();
            int result = calculateRecurrence(n, 1);
            clock_t end_time = clock();

            printf("Result T(%d) = %d\n", n, result);
            printf("Final Time Complexity: O(n * log2(n))\n");
            printf("Runtime: %f seconds\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
            // Suggestion: Use valgrind for memory profiling on Unix-like systems
            // Example: valgrind --leak-check=full ./main
        } else if (choice == 2) {
            int n;
            printf("Enter the value of n: ");
            scanf("%d", &n);

            clock_t start_time = clock();
            int result = recurrence(n);
            clock_t end_time = clock();

            printf("T(%d) = %d\n", n, result);
            printf("Time Complexity: O(n^2)\n");
            printf("Runtime: %f seconds\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);
            // Suggestion: Use valgrind for memory profiling on Unix-like systems
            // Example: valgrind --leak-check=full ./main
        } else if (choice == 3) {
            break; // Exit the loop when choice is 3
        } else {
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
        }
    }

    return 0;
}
