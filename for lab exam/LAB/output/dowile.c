#include<stdio.h>

int main() {
    int a, b, c;
    char choice;

    do {
        printf("Read Numbers \n");
        scanf("%d %d %d", &a, &b, &c);

        if (a > b) {
            if (a > c) {
                printf("The largest number is %d\n", a);
            } else {
                printf("The largest number is %d\n", c);
            }
        } else if (b > c) {
            printf("The largest number is %d\n", b);
        } else {
            printf("The largest number is %d\n", c);
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);  // The space before %c is to consume any leftover whitespace
    } while(choice == 'y' || choice == 'Y');

    return 0;
}
