#include <stdio.h>

int main() {
    int x, sum=0, i=2;
    scanf("%d", &x);
    while (i<=x)
        {
          sum +=i;
          i += 2;
        }
        printf("%d ", sum);

    return 0;
}
