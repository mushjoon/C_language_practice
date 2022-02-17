#include <stdio.h>
#include <string.h>

int main()
{
    char text1[] = "The quick brown fox";
    char target = 'q';
    char *pTarget = NULL;
    pTarget = strchr(text1, target);

    printf("%s\n", pTarget);

    char text2[] = "Every dog has his day";
    char targetDog[] = "dog";
    char *pTargetDog = NULL;
    pTargetDog = strstr(text2, targetDog);

    printf("%s\n", pTargetDog);


    return 0;
}