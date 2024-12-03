
#include <stdio.h>

// Function signum
int signum(int x) {
    if (x > 0) {
        return 1;   // Positive number
    } else if (x < 0) {
        return -1;  // Negative number
    } else {
        return 0;   // Zero
    }
}

int main() {
    // Testing the signum function
    int test_values[] = {5, -3, 0, 8, -7};
    int i;

    // Call the signum function for different values
    for (i = 0; i < 5; i++) {
        int value = test_values[i];
        printf("signum(%d) = %d\n", value, signum(value));
    }

    return 0;
}
