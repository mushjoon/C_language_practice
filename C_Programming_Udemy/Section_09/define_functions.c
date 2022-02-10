#include <stdio.h>

// either define all the functions before the main() or use function prototype like below so you won't get error
void add();

int main()
{

    add();

    return 0;
}

void add()
{
    printf("Add() function called");
}