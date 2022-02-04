// display the byte size of basic data types supported in C
#include <stdio.h>

int main() {

    int a;
    char b;
    long c;
    long long d;
    double e;
    long double f;

    printf("Int: %zd\n", sizeof(a));
    printf("Char: %zd\n", sizeof(b));
    printf("Long: %zd\n", sizeof(c));
    printf("Long long: %zd\n", sizeof(d));
    printf("Double: %zd\n", sizeof(e));
    printf("Long double: %zd\n", sizeof(f));

    return 0;
}