// 整数を３つの user から受け取り, 小さい順に出力させる

#include <stdio.h>

int main(void) {

    int a, b, c, temp;

    puts("1つ目の整数は");
    scanf("%d", &a);

    puts("2つ目の整数は");
    scanf("%d", &b);

    puts("3つ目の整数は");
    scanf("%d", &c);

    // 小さい順に並び替える
    if (a > b) {
        temp = a; // a を一時的に避難
        a = b;    // a が b に上書きされる
        b = temp; // a の値を代入
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a; // a を一時的に避難
        a = b;    // a が b に上書きされる
        b = temp; // a の値を代入
    }

    printf("%d, %d, %d\n", a, b, c);

    return 0;
}
