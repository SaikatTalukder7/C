#include<stdio.h>
int main()
{
    int n = 4;

     for(int i=1; i<=n; i++)
      {
          for(int j=1; j<=n; j++)
            printf("%c ", j+64);
            printf("\n");
      }

    return 0;
}


