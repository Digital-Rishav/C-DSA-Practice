#include <stdio.h>

int main()
{
    int length, width, perimeter;

    printf("Enter the length of Rectangle: \n");
    scanf("%d", &length);

    printf("Enter the width of Rectangle: \n");
    scanf("%d", &width);

    perimeter = 2*(length+width);

    printf("The area of required Rectangle is: %d\n", perimeter);
}