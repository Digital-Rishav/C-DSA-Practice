// #include <stdio.h>

// int main() {
//     char name[50];  // Array to store the name

//     printf("Enter your name: ");
//     scanf("%49s", name);  // Take input (limit to 49 characters)

//     printf("Hello, %s!\n", name);  // Print greeting
//     return 0;
// }
#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);  // Read full line including spaces

    printf("Hello, %s", name);  // fgets keeps the newline
    return 0;
}
