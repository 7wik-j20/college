#include <stdio.h>

void main() {
    int a, b;
    printf("enter the values of a and b : ");
    scanf("%d %d", &a, &b);
    
    // Logic begins
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping a=%d , b=%d", a, b);
}
