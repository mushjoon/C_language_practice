#include <stdio.h>
#include <string.h>

int main() {

    int age;
    char name[25]; // 25 bytes

    printf("What is your name?\n");
    //scanf("%s", &name); // scanf cannot read white spaces

    fgets(name, 25, stdin); // use this if you gotta get user input like full name that has white space in the middle
    name[strlen(name)-1] = '\0'; // fgets() has \n functionality so use this code

    printf("How old are you?\n");

    scanf("%d", &age);

    printf("Hello %s, how are you?\n", name);
    printf("You are %d years old", age);

    return 0;
}