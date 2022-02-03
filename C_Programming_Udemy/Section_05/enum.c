#include <stdio.h>

int main() {

    enum gender {male, female};

    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    char myChar = '\n';

    printf("enum myGender: %d\n", myGender);
    printf("enum anotherGender: %d", anotherGender);
    printf("%c", myChar);

    return 0;
}