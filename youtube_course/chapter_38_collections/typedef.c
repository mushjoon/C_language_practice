#include <stdio.h>
#include <string.h>

//typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;


int main() {

    // typedef = reserved keyword that gives an existing datatype a "nickname";

    User user1 = {"Bro", "password123", 12345678};
    User user2 = {"Jack", "1q2w3e4r", 44445555};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");

    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
    printf("\n");

    return 0;
}