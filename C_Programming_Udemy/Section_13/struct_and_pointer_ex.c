#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getInfo(struct namect *pst);

struct namect
{
    char *firstName;
    char *lastName;
    int letters;
};

int main()
{

    return 0;
}

void getInfo(struct namect *pst)
{
    const int SLEN = 255;
    char temp[SLEN];

    printf("Please enter your first name.\n");
    s_gets(temp, SLEN);

    pst -> firstName = (char*)malloc(strlen(temp) + 1);

    strcpy(pst -> firstName, temp);
    printf("Please enter your last name.\n");
    s_gets(temp, SLEN);

    pst -> lastName = (char*)malloc(strlen(temp) + 1);
    strcpy(pst -> lastName, temp);
}