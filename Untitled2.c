//#include <stdio.h>
//#include <stdlib.h>
//
///* Input Module */
//int get_input(int *num1, int *num2) {
//    printf("Enter two integers: ");
//    if (scanf("%d %d", num1, num2) != 2) {
//        return 0; // return 0 for invalid input
//    }
//    return 1; // return 1 for valid input
//}
//
///* Calculation Module */
//int calculate(int num1, int num2, int *result) {
//    if (num2 == 0) {
//        return 0; // return 0 for division by zero error
//    }
//    *result = num1 / num2;
//    return 1; // return 1 for successful calculation
//}
//
///* Output Module */
//void display_output(int num1, int num2, int result) {
//    printf("%d / %d = %d\n", num1, num2, result);
//}
//
///* Error Handling Module */
//void handle_error(int error_code) {
//    if (error_code == 0) {
//        printf("Error: Division by zero!\n");
//    } else {
//        printf("Error: Invalid input!\n");
//    }
//    exit(1); // exit the program with error status
//}
//
///* Data Storage Module */
//void save_data(int num1, int num2, int result) {
//    FILE *fp = fopen("results.txt", "a"); // open file in append mode
//    if (fp == NULL) {
//        printf("Error: Unable to open file!\n");
//        return;
//    }
//    fprintf(fp, "%d / %d = %d\n", num1, num2, result);
//    fclose(fp); // close the file
//}
//
///* Main Function */
//int main() {
//    int num1, num2, result;
//    if (!get_input(&num1, &num2)) {
//        handle_error(1); // invalid input
//    }
//    if (!calculate(num1, num2, &result)) {
//        handle_error(0); // division by zero error
//    }
//    display_output(num1, num2, result);
//    save_data(num1, num2, result);
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>

/* Input Module */
int get_input(float *income) {
    printf("Enter your income: ");
    if (scanf("%f", income) != 1) {
        return 0; // return 0 for invalid input
    }
    return 1; // return 1 for valid input
}

/* Calculation Module */
float calculate_tax(float income) {
    float tax = 0.0;
    if (income <= 250000) {
        tax = 0.0;
    } else if (income <= 500000) {
        tax = 0.05 * (income - 250000);
    } else if (income <= 1000000) {
        tax = 0.05 * 250000 + 0.2 * (income - 500000);
    } else {
        tax = 0.05 * 250000 + 0.2 * 500000 + 0.3 * (income - 1000000);
    }
    return tax;
}

/* Output Module */
void display_output(float income, float tax) {
    printf("Income: %.2f\nTax: %.2f\n", income, tax);
}

/* Error Handling Module */
void handle_error() {
    printf("Error: Invalid input!\n");
    exit(1); // exit the program with error status
}

/* Data Storage Module */
void save_data(float income, float tax) {
    FILE *fp = fopen("tax_records.txt", "a"); // open file in append mode
    if (fp == NULL) {
        printf("Error: Unable to open file!\n");
        return;
    }
    fprintf(fp, "Income: %.2f, Tax: %.2f\n", income, tax);
    fclose(fp); // close the file
}

/* Main Function */
int main() {
    float income, tax;
    if (!get_input(&income)) {
        handle_error(); // invalid input
    }
    tax = calculate_tax(income);
    display_output(income, tax);
    save_data(income, tax);
    return 0;
}
