#include <stdio.h>

int main() {
    int num1,num2,sum,product,sub,divi ;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    
    sum= num1 + num2;
    product= num1*num2;
    sub= num1-num2;
    divi= num1/num2;
    printf("The sum of %.2d and %.2d is %.2d\n ",num1,num2,sum);
    printf("The product of %.2d and %.2d is %.2d\n ",num1,num2,product);
    printf("The sub of %.2d and %.2d is %.2d\n ",num1,num2,sub);
    printf("The division of %.2d and %.2d is %.2d\n ",num1,num2,divi);

    return 0;
}