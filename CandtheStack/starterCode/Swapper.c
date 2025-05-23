/**
 * Initial Starter code for Code Along: Swapper. 
 * This code will demonstrate how to swap two numbers using a pointers.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int*b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    printf("Values: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);
    
    printf("Swapped values: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}