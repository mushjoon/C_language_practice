#include <stdio.h>

int main() {

    double width;
    double height;
    double perimeter;
    double area;

    printf("Enter the width:\n");
    scanf("%lf", &width);
    
    printf("Enter the height:\n");
    scanf("%lf", &height);
    
    perimeter = (width + height) * 2.0;
    area = width * height;

    printf("\nWidth is %.2lf and height is %.2lf", width, height);
    printf("\nPerimeter is %.2lf and area is %.2lf\n", perimeter, area);

    return 0;
}