#include <stdio.h>
#include <string.h>


int main() {

    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    // to change an element of an array of strings you can't simply do this
    // cars[0] = "Tesla"
    // you have to include string.h and use strcpy method

    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
    

    return 0;
}