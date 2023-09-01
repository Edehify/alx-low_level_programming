#include <stdio.h>
#include <stdlib.h>

void remove_leading_zeroes(char *str);
int get_digit(char c);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];
    remove_leading_zeroes(num1);
    remove_leading_zeroes(num2);

    if (*num1 == '\0' || *num2 == '\0') {
        printf("0\n");
        return 0;
    }

    size_t len1 = strlen(num1);
    size_t len2 = strlen(num2);
    size_t size = len1 + len2;
    char *final_prod = malloc(sizeof(char) * (size + 1));
    char *next_prod = malloc(sizeof(char) * (size + 1));

    if (!final_prod || !next_prod) {
        printf("Memory allocation error\n");
        return 1;
    }

    for (size_t i = 0; i < size + 1; i++) {
        final_prod[i] = '0';
        next_prod[i] = '0';
    }

    for (size_t i = 0; i < len2; i++) {
        int digit = get_digit(num2[len2 - 1 - i]);
        int carry = 0;

        for (size_t j = 0; j < len1; j++) {
            int prod = (num1[len1 - 1 - j] - '0') * digit + carry + (final_prod[size - i - j] - '0');
            final_prod[size - i - j] = prod % 10 + '0';
            carry = prod / 10;
        }

        final_prod[size - i - len1] = carry + '0';
    }

    int printed = 0;
    for (size_t i = 0; i < size + 1; i++) {
        if (!printed && final_prod[i] != '0') {
            printed = 1;
        }
        if (printed) {
            putchar(final_prod[i]);
        }
    }
    putchar('\n');

    free(final_prod);
    free(next_prod);

    return 0;
}

void remove_leading_zeroes(char *str) {
    while (*str == '0') {
        str++;
    }
}

int get_digit(char c) {
    return c - '0';
}
