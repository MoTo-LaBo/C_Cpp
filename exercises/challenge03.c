
/* 入力された数値の順番を昇順に並び替える algorithm */

#include <stdio.h>

int main(void) {

    // 幾つの整数を入力するのか user に尋ねる
    int i, j, num, temp;
    int value[100]; // value[0]... [100] まで入れれる

    puts("入力する整数の数を入力して下さい");
    scanf("%d", &num);

    // 指定された個数の入力を行う
    for (i = 0; i < num; i++) {
        scanf("%d", &value[i]);
    }

    // 並べ替えの部分 : index は [0] ~ 始まるので -1
    for (i = 0; i < num - 1; i++) {

        for (j = 0; j < num - 1; j++) {

            if (value[j] > value[j + 1]) {

                temp = value[j];
                value[j] = value[j + 1];
                value[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < num; i++) {
        printf("%d", value[i]);
    }


    return 0;
}
