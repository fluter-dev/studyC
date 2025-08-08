#include <stdio.h>

int main (){
    int value1, value2;
    int addition, subtraction, multiplication, division, result = 10;

    printf("Enter a value: ");
    scanf("%d", &value1);

    printf("Enter a value: ");
    scanf("%d", &value2);

    addition = value1 + value2;
    
    subtraction = value1 - value2;

    multiplication = value1 * value2;

    division = value1 / value2;

    printf("The Values after calculate is: \n");
    printf("Addition = %d\n", addition);
    printf("Subtraction = %d\n", subtraction);
    printf("Multiplication = %d\n", multiplication);
    printf("Division = %d\n", division);
    
    //result = result + value1
    result += value1;
    printf("Result = %d\n", result);
    //result = result - value1
    result -= value1;
    printf("Result = %d\n", result);
    //result = result * value1
    result *= value1;
    printf("Result = %d\n", result);
    //result = result / value1
    result /= value1;
    printf("Result = %d\n", result);

    // value1 = value1 + 1 | value += 1
    printf("Before-increment: %d\n", value1);
    value1++;
    printf("After-increment: %d\n", value1);

    // value1 = value1 - 1 | value -= 1
    printf("Before-decrement: %d\n", value1);
    value1--;
    printf("After-decrement: %d\n", value1);
}