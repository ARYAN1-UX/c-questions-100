#include <stdio.h>
#include <math.h>

int main() {
    double radius ;
    double area , circum;
    
    printf("Enter the radius of a circle :");
    scanf("%lf", &radius);
    
    area=M_PI * radius * radius ;
    circum=2 * M_PI * radius ;
    printf("Radius of the circle is %2lf : \n",radius);
    printf("The area of the circle is %2lf : \n",area);
    printf("The circumference of the circle is %2lf : \n",circum);
    
    return 0;
}