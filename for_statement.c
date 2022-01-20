#include <stdio.h>

/* print Fahrenheit - Celsius Table */
int main(){
    int fahr;

    // for(fahr = 0; fahr <= 300; fahr = fahr + 20){
    //     printf("%3d \t%6.2f\n", fahr, (5.0/9.0)*(fahr-32));
    // }
    
    // Exercise 1-5: print the table in reverse order, from 300 degrees to 0
    for(fahr = 300; fahr >= 0; fahr = fahr - 20) 
        printf("%3d \t%6.2f\n", fahr, (5.0/9.0)*(fahr-32));
    

    return 0;
}