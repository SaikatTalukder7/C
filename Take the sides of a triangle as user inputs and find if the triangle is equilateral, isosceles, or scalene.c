#include <stdio.h>
int main() {
    int slide1,slide2,slide3;
    scanf("%d %d %d", &slide1, &slide2, &slide3);
    if(slide1==slide2 && slide2==slide3)
    {
        printf("Equilateral");
    }
    else if(slide1==slide2 || slide2==slide3 || slide1==slide3)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }

    return 0;
}
