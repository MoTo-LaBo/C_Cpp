#include <stdio.h>

// 関数化を行う : 2乗する function

int square(int num) {
    num = num * num;
    return num;
}

void square_norep(int num) {
    num = num * num;
    printf("%d\n", num);
}

int main(void){

    int a = 2;
    a = a * a;
    printf("%d\n", a);

    printf("%d\n", square(3));
    square_norep(4);

    return 0;
}
