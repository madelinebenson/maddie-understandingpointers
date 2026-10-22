#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;

    int *p1 = &num1;
    int *p2 = &num2;

    // Swap using a temporary value read through the pointers
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}

