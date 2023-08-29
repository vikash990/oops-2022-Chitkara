#include <stdio.h>

// Define a union named 'Number'
union Number {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    union Number num;

    num.intValue = 42;
    printf("Integer value: %d\n", num.intValue);

    num.floatValue = 3.14;
    printf("Float value: %f\n", num.floatValue);

    num.charValue = 'A';
    printf("Char value: %c\n", num.charValue);

    // The values are stored in the same memory location,
    // so accessing one member might affect others.
    printf("After storing a char, integer value: %d\n", num.intValue);

    return 0;
}
