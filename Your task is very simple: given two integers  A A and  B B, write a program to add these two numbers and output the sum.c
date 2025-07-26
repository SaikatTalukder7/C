#include <stdio.h>
int main() {
    int T, A, B;
    scanf("%d", &T);

    // Loop through each test case
    for (int i = 0; i < T; i++) {
        // Read the two integers A and B
        scanf("%d %d", &A, &B);
      
        // Output the sum of A and B
        printf("%d\n", A + B);
    }
    return 0;
}

