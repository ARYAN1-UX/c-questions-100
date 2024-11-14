#include <stdio.h>
#include <string.h>

void addBinary(char bin1[], char bin2[]) {
    int i = strlen(bin1) - 1;
    int j = strlen(bin2) - 1;
    int carry = 0;
    int k = (i > j ? i : j) + 2;
    char result[k];
    result[k--] = '\0';

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += bin1[i--] - '0';
        if (j >= 0) sum += bin2[j--] - '0';
        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }

    printf("Sum of binary numbers: %s\n", result + k + 1);
}

int main() {
    char bin1[100], bin2[100];
    printf("Enter the first binary number: ");
    scanf("%s", bin1);
    printf("Enter the second binary number: ");
    scanf("%s", bin2);

    addBinary(bin1, bin2);
    return 0;
}