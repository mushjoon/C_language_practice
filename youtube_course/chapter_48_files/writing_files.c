#include <stdio.h>

int main() {

    FILE *pF = fopen("C:\\Users\\solugate\\Desktop\\text.txt", "w");

    fprintf(pF, "Spongebob Squarepants");

    fclose(pF);

    // if (remove("test.txt") == 0)
    // {
    //     printf("That file was deleted successfully!!!");
    // } else {
    //     printf("That file was not deleted");
    // }
    

    return 0;
}