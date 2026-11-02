#include <stdio.h>

// User Defined Functions (UDF) declaration & definition
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

int modulus(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Error: Modulo by zero is not allowed.\n");
        return 0;
    }
}

int main() {
    int choice;
    int num1, num2;

    while (1) {
        // Display Menu
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Exit condition
        if (choice == 0) {
            printf("Exiting program...\n");
            break;
        }

        // Validate choice before asking for numbers
        if (choice >= 1 && choice <= 5) {
            printf("Enter the first number: ");
            scanf("%d", &num1);
            printf("Enter the second number: ");
            scanf("%d", &num2);

            // Switch case handling
            switch (choice) {
                case 1:
                    printf("Addition of %d and %d is %d\n", num1, num2, add(num1, num2));
                    break;
                case 2:
                    printf("Subtraction of %d and %d is %d\n", num1, num2, subtract(num1, num2));
                    break;
                case 3:
                    printf("Multiplication of %d and %d is %d\n", num1, num2, multiply(num1, num2));
                    break;
                case 4:
                    if (num2 != 0) {
                        printf("Division of %d and %d is %d\n", num1, num2, divide(num1, num2));
                    } else {
                        divide(num1, num2); // Triggers error message
                    }
                    break;
                case 5:
                    if (num2 != 0) {
                        printf("Modulus of %d and %d is %d\n", num1, num2, modulus(num1, num2));
                    } else {
                        modulus(num1, num2); // Triggers error message
                    }
                    break;
            }
        } else {
            printf("Invalid choice! Please select an option between 0 and 5.\n");
        }
    }

    return 0;
}
