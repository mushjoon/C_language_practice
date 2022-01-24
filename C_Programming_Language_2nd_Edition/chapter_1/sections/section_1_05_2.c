// next program counts characters
#include <stdio.h>

int main()
{
    // long nc;

    // nc = 0;

    // while (getchar() != EOF)
    //     ++nc;
    // printf("%1d\n", nc);
    
    // 2nd version
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n",nc);
    
    return 0;
}
