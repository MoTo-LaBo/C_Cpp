#include <stdio.h>

int main(void) {

    int a[10], i;
    a[0] = 0;
    a[1] = 2;
    a[2] = 4;
    a[3] = 6;
    a[4] = 8;
    a[5] = 10;
    a[9] = 9;
    printf("%d\n", a[0]);

    for(i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }


    return 0;

}
