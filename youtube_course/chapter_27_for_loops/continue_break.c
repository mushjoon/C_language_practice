#include <stdio.h>

int main() {

    // continue = skips rest of code and forces the next iteration of the loop
    // break = exits a loop entirely / also used in switch statement

    for(int i = 1; i <= 20; i++) {
        
        if (i == 13){
            //continue;
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}