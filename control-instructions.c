// Sequence Control Instructions

// Calculation of Simple Interest (SI)
#include <stdio.h>

int main()
{
    int p, n;
    float r, si;

    printf("Enter the values of p, n, r:\n");
    scanf("%d %d %f", &p, &n, &r);

    si = (p * r * n) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}