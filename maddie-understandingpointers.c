#include <stdio.h>

int main() {
    // CLASSWORK: UNDERSTANDING POINTERS IN C

    // Declare an integer variable called score and assign it 80
    int score = 80;

    // Declare an integer pointer called ptr
    int *ptr;

    // Make ptr point to the address of score
    ptr = &score;

    // Print the value of score
    printf("score = %d\n", score);

    // Print the memory address of score using %p (cast to void *)
    printf("address of score = %p\n", (void *)&score);

    // Print the address stored in ptr using %p
    printf("address stored in ptr = %p\n", (void *)ptr);

    // Print the value of score using *ptr
    printf("value of score via *ptr = %d\n", *ptr);

    // Use the pointer to change score to 95
    *ptr = 95;

    // Print score again to confirm the change
    printf("score after *ptr = 95 -> %d\n", score);

    // Explanation:
    // Changing *ptr also changes score because ptr holds the
    // address of score, and *ptr dereferences that address to
    // access the exact same memory location that score occupies.

    return 0;
}
 