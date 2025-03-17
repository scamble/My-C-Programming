#include <stdio.h>
int main() {
    float angle1, angle2, angle3;
    printf("Enter the first angle of the triangle: ");
    scanf("%f", &angle1);
    printf("Enter the second angle of the triangle: ");
    scanf("%f", &angle2);
    if (angle1 <= 0 || angle2 <= 0 || angle1 + angle2 >= 180) {
        printf("Invalid angles. The sum of the first two angles must be less than 180 degrees and greater than 0.\n");
    } else {
        angle3 = 180 - (angle1 + angle2);
        printf("The third angle of the triangle is: %.2f degrees\n", angle3);
    }

    return 0;
}