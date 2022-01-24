#include <stdio.h>
#include <stdbool.h>

int main() {

    char a = 'C';
    char b[] = "Bro";

    float c = 3.141592;
    double d = 3.141592653689793;

    bool e = true; // output 1 = true, output 0 = false

    char f = 120; // 1 byte (-128 to +127)
    unsigned char g = 256; // 1 byte (0 to +255) 

    short h = 32768; // 2 bytes (-32768 to 32767)
    unsigned short h = 65535;

    int j = 2147483647; // 4 bytes (-2 billion to +2 bil)
    unsigned int k = 4294967295;

    long long int l = 922333333333; // 8 bytes (-9 quintillion to +9 quintillion)

    printf("%d\n", e);

    return 0;
}