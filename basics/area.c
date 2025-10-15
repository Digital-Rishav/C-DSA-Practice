#include <stdio.h>

int main()
{
    int length, width, area;

    printf("Enter the length of Rectangle: \n");
    scanf("%d", &length);

    printf("Enter the width of Rectangle: \n");
    scanf("%d", &width);

    area = length*width;

    printf("The area of required Rectangle is: %d\n", area);
}