#include <stdio.h>

int findMax(int x, int y) {

    return (x > y) ? x : y; 
}

int main() {

    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false
    // same as in JAVA

    int max = findMax(5, 2);

    printf("%d", max);

    return 0;
}