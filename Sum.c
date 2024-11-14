#include <stdio.h>

int main() {
    int num , sum = 0;
    
    printf("Enter a number :");
    scanf("%d", &num);
    
    
    
    while(num>0){
        sum+= num % 10;
        num /= 10;
    }
    printf("The sum of the numbers is : %d \n",sum);
    
    
    return 0;
}