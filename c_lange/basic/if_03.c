#include <stdio.h>

int main(void){

    // 2条件分岐
    int a = 7;
    if(a > 3){
        puts("upper 3");
    }
    else {
        puts("under 3");
    }

    // 3条件分岐
    if(a > 5){
        puts("under 5");
    }
    else if(a == 5){
        puts("just 5");
    }
    else {
        puts("upper 5");
    }


    return 0;
}
