#include <stdio.h>

int main()
{
    int a,b,ctemp;
    printf("Enter first num:");
    scanf("%d",&a);
    printf("Enter sec num:");
    scanf("%d",&b);
    printf("Before a= %d and b= %d \n", a , b);
    ctemp=a;
    a=b;
    b=ctemp;
    printf("After a=%d and b= %d \n ", a, b);
    
    return 0;
}