//Note: Prime numbers are the numbers that are divisible by only 1 and the number itself.

#include <stdio.h>
#include <math.h>  // For sqrt function

int main() {
    int num, i = 2;
    scanf("%d", &num);
    if (num <= 1) 
    {
        printf("NO");
        return 0;
    }
    while (i <= sqrt(num)) {  // Check divisibility up to sqrt(num)
        if (num % i == 0) {
            printf("NO");
            return 0;
        }
        i++;
    }

    printf("YES");
    return 0;
}
