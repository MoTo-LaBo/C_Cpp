/* 素数判定 (num > 2) algorithm */

#include <stdio.h>

int main(void) {

    // 変数宣言
    int num, i, j, flag;
    puts("-------------- 素数判定 -----------------");
    puts("2以上の整数を入力してください");
    scanf("%d", &num);

    // 受け取った値を素数判定
    flag = 1; // 素数である
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag == 0) {
        puts("素数ではありません");
    }
    else {
        printf("入力値 >> %d << は素数です\n", num);
    }



    return 0;
}
