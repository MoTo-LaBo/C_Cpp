// for, while文

#include <stdio.h>

    int main(void) {

    int i;
        
    for (i = 0; i < 10; i++) {
        printf("for %d\n", i);
    }

    int j = 0;
    while (j < 10) {
        printf("while %d\n", j);

        j += 1;
    }

    return 0;
}
