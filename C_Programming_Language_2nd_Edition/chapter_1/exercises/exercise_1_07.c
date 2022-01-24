#include <stdio.h>

int main(int argc, char const *argv[])
{
    // printf("EOF is %d\n",EOF);
    int answer;
    printf("%s\n","What is your name?");
    answer = getchar();
    printf("My name is %s\n",putchar(answer));


    return 0;
}
