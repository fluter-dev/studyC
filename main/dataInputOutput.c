#include <stdio.h>

int main(){
    char name[50] = "", gender = '\0';
    int age = 0, registrationNumber = 0;
    float height = 0.0;
    
    printf("Enter your Name: ");
    scanf("%99[^\n]", name);

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your Height: ");
    scanf("%f", &height);

    printf("Enter your Gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter your Registration Number: ");
    scanf("%d", &registrationNumber);

    printf("\n");

    printf("Your Name is: %s\n", name);
    printf("The Age is: %d\n", age);
    printf("The Height is: %.2f\n", height);
    if (gender == 'M'||gender == 'F'){
        printf("The Gender is: %c\n", gender);
    } else {
        printf("Invalid Gender!\n");
    }
    printf("The Registration Number is: %d\n", registrationNumber);

    return 0;
}