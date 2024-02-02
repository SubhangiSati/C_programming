//MASTERS THEOREM 
#include <stdio.h>
#include <math.h>
// Function to compute the time complexity class based on Master Theorem
int masterTheorem(int a, int b, int k) {
    double log_b_a = log((double)a) / log((double)b);
    
    if (log_b_a < k)
        return 1; // O(n^k)
    else if (log_b_a == k)
        return 2; // O(n^k * log n)
    else
        return 3; // O(n^(log_b_a))
}
int main() {
    int a, b, k;
    printf("Enter the coefficients of the recurrence relation T(n) = a*T(n/b) + n^k\n");
    printf("Enter 'a': ");
    scanf("%d", &a);
    printf("Enter 'b': ");
    scanf("%d", &b);
    printf("Enter 'k': ");
    scanf("%d", &k);
    int complexity = masterTheorem(a, b, k);
    switch (complexity) {
        case 1:
            printf("The time complexity is O(n^%d)\n", k);
            break;
        case 2:
            printf("The time complexity is O(n^%d * log n)\n", k);
            break;
        case 3:
            printf("The time complexity is O(n^(log_%d %d))\n", b, a);
            break;
        default:
            printf("Invalid input.\n");
    }
    return 0;
}
