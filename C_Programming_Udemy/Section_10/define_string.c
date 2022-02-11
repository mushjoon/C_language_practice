#include <stdio.h>
#include <string.h>

// C has no special variabletypes for strings
// Strings are stored in an array of type char
// char myString[20]; <= this variable can only contain up to 19 characters and 1 null character

int main() 
{
    // initialize a string
    char word[] = {'H', 'e', 'l', 'l', 'o', '!'};

    // Just let the compiler figure out the null character automatically and simply write how many actual letters you need in the sqaure bracket
    char newWord[6] = {"Hello!"};

    char str[40] = "To be";

    // To assign a different value to an array of strings after it's been declared or initialized, you have to use strncpy() function 

    // To display a string as output using the printf function, you don't have to provide indexes. Just do this:
    char message[] = "What's up?";
    
    printf("\nThe message is: %s", message); 
}