/* 下から数えた100 番目の素数を求める algorithm */

#include <stdio.h>

int main(void) {

    int count = 0, i, j, answer, flag;

    // 2 ~ 1000 までの素数を列挙して 100 番目のものを answer で出力
    for (i = 2; i < 1001; i++) {

        flag = 1; // 素数だと仮定

        for (j = 2; j < i; j++) {
            if (i % j == 0) {

                flag = 0; // 素数ではない
                break;
            }
        }
        if (flag == 1) {
            count++;
            answer = i;
            printf("count = %d, value = %d\n", count, answer); // check : 正確に計算されているかのチェック
        }
        if (count == 100) {
            break;
        }
    }

    printf("100番目の総数は >> %d\n", answer);

    return 0;
}
