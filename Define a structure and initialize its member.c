#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1;

    printf("Enter x and y coordinates: ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("Point coordinates: (%d, %d)\n", p1.x, p1.y);
    return 0;
}