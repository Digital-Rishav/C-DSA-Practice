// Sequence Control Instructions

// Calculation of Simple Interest (SI)
// #include <stdio.h>

// int main()
// {
//     int p, n;
//     float r, si;

//     printf("Enter the values of p, n, r:\n");
//     scanf("%d %d %f", &p, &n, &r);

//     si = (p * r * n) / 100;

//     printf("Simple Interest = %.2f\n", si);

//     return 0;
// }


#include <stdio.h>
int main() {
    int choice;
start:
    while (1) { // loop to keep showing menu
        printf("\n1.Add  2.Subtract  3.Skip  4.Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("You chose Addition\n");
                break;  // exits switch
            case 2:
                printf("You chose Subtraction\n");
                break;
            case 3:
                printf("Skipping this turn using continue\n");
                continue; // skips rest of loop and reprints menu
            case 4:
                printf("Exiting program...\n");
                break; // exits switch
            default:
                printf("Invalid choice! Try again.\n");
                continue; // skips rest and restarts menu
        }

        if (choice == 4)
            break; // exits while loop completely
    }
    return 0;
}
