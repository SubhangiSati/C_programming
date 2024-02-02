//SUBSTITUTION METHOD
#include <stdio.h>
int calculateRecurrence(int n, int depth) {
    if (n == 1) {
        printf("Iteration %d: T(1) = 1\n", depth);
        return 1;
    } else {
        printf("Iteration %d: T(%d) = 2 * T(%d/2) + %d\n", depth, n, n, n);
        return 2 * calculateRecurrence(n / 2, depth + 1) + n;
    }
}
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
        printf("2 - Calculate Time Complexity for T(n) = T(n-1) + n\n");
        printf("3 - Exit\n");
        scanf("%d", &choice);
        if (choice == 1) {
            int n;
            printf("Enter the value of n: ");
            scanf("%d", &n);
            int result = calculateRecurrence(n, 1);
            printf("Result T(%d) = %d\n", n, result);
            printf("Final Time Complexity: O(n * log2(n))\n");
        } else if (choice == 2) {
            int n;
            printf("Enter the value of n: ");
            scanf("%d", &n);
            int result = recurrence(n);
            printf("T(%d) = %d\n", n, result);
            printf("Time Complexity: O(n^2)\n");
        } else if (choice == 3) {
            break; // Exit the loop when choice is 3
        } else {
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
        }
    }
    return 0;
}
