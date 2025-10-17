#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    int sum = add(a, b);

    printf("The sum is: %d\n", sum);

    return 0;
}
