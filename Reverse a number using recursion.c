#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0) return rev;
    else return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d", num, reverseNumber(num, 0));
    return 0;
}