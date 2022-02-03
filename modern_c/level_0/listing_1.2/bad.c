// #include <stdio.h>
// void main() {

//     int i;
//     double A[5] = {
//         9.0,
//         2.9,
//         3.E+25,
//         .00007,
//     };

//     for (i = 0; i < 5; ++i) {
//         printf("element %d is %g, \tits square is %g\n",
//                 i,
//                 A[i],
//                 A[i] * A[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    double A[5] = {
        9.0,
        2.9,
        3.E+25,
        .00007,
    };

    for (int i = 0; i < 5; ++i) {
        printf("element %d is %g, \tits square is %g\n",
                i,
                A[i],
                A[i] * A[i]);
    }

    return EXIT_SUCCESS;
}