#include <stdio.h>

/* 入力された整数が 10以上なら OK と出力し, 10 未満なら No と出力 */
// 1, 入口と出口を先に記述すると記述しやすい

int main(void){

    int num;
    scanf("%d", &num);

    if(num >= 10){
        // printf("OK\n");
        puts("OK");
    }
    else {
        // printf("No\n");
        puts("No");
    }


    return 0;
}
