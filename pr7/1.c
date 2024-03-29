#include <stdio.h>

int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
float division(float x, float y);
int modulus(int x, int y);

int main() {
    char choice;
    int num1, num2;
    
    while (1) {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");

        printf("\nEnter your choice: ");
        scanf(" %c", &choice);

        if (choice == '0') {
            printf("Exiting the program...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch(choice) {
            case '1':
                printf("Addition of %d and %d is %d\n", num1, num2, addition(num1, num2));
                break;
            case '2':
                printf("Subtraction of %d and %d is %d\n", num1, num2, subtraction(num1, num2));
                break;
            case '3':
                printf("Multiplication of %d and %d is %d\n", num1, num2, multiplication(num1, num2));
                break;
            case '4':
                if (num2 == 0) {
                    printf("Error! Can't Division by zero!\n");
                } else {
                    printf("Division of %d and %d is %.2f\n", num1, num2, division(num1, num2));
                }
                break;
            case '5':
                if ((int)num2 == 0) {
                    printf("Error! can't Divide By Zero!\n");
                } else {
                    printf("Modulus of %d and %d is %d\n", num1, num2, modulus((int)num1, (int)num2));
                }
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}


int addition(int x, int y) {
    return x + y;
}

int subtraction(int x, int y) {
    return x - y;
}

int multiplication(int x, int y) {
    return x * y;
}

float division(float x, float y) {
    return x / y;
}

int modulus(int x, int y) {
    return x % y;
}

